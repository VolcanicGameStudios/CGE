#include "GraphicsEngine.h"
#include <iostream>
#include <vector>
#include <math.h>

using namespace CGE;

GraphicsEngine::Window GraphicsEngine::createWindow(int x, int y)
{
	Window window;
	window.windowWidth = x;
	window.windowHeight = y;

	return window;
}
GraphicsEngine GraphicsEngine::createGraphicsEngine()
{
	GraphicsEngine ge;

	return ge;
}


void GraphicsEngine::draw(Window window, GraphicsEngine ge, int drawData[], int drawDataLength, DrawDataType ddt)
{

	for (window.CurrentY = 1; window.CurrentY < window.windowHeight; window.CurrentY++)
	{
		for (window.CurrentX = 1; window.CurrentX < window.windowWidth; window.CurrentX++)
		{

			switch (ddt)
			{
			case DrawDataType::None:
			{
				break;
			}
			case DrawDataType::Point:
			{
				if (window.CurrentX == drawData[0])
				{
					if (window.CurrentY == drawData[1])
					{
						std::printf("0");
						std::fflush(stdout);
						window.CurrentX++;
					}
				}
			}
			case DrawDataType::Triangle:
			{
				std::vector <int> arr;
				for (int j = 0; j < drawDataLength / 6; j++, j++, j++, j++, j++, j++)
				{
					int drawDistance = drawData[3 + j] - drawData[1 + j];

					int x, y, x1, y1, x2, y2, p, dx, dy;

					arr.push_back(drawData[0+j]);
					arr.push_back(drawData[1+j]);

					int val = drawData[2] - drawData[0];

					if (val < 0)
					{
						x1 = drawData[0 + j];
						y1 = drawData[1 + j];

						x2 = drawData[2 + j];
						y2 = drawData[3 + j];

						dx = abs(x2 - x1);
						dy = abs(y2 - y1);

						p = 2 * dy - dx;

						x = x1;
						y = y1;





						arr.push_back(abs(x));
						arr.push_back(abs(y));

						while (x2 <= x)
						{
							if (p < 0)
							{
								y = y + 1;
								p = p + 2 * dx;
							}
							else
							{
								x = x - 1;
								y = y + 1;
								p = p + 2 * dy + 2 * dx;
							}
							arr.push_back(abs(x));
							arr.push_back(abs(y));
						}
					}
					else if (val == 0)
					{
						for (int v = 1; v < drawDistance; v++)
						{
							arr.push_back(drawData[0]);
							arr.push_back(drawData[3] - v);
						}
					}
					else if (val > 0)
					{
						x1 = drawData[0 + j] + 1;
						y1 = drawData[1 + j] + 1;

						x2 = drawData[2 + j] - 1;
						y2 = drawData[3 + j] - 1;

						dx = x2 - x1;
						dy = y2 - y1;

						p = 2 * dy - dx;

						x = x1;
						y = y1;

						arr.push_back(x);
						arr.push_back(y);

						while (x <= x2)
						{
							if (p < 0)
							{
								x = x + 1;
								p = p + 2 * dy;
							}
							else
							{
								x = x + 1;
								y = y + 1;
								p = p + 2 * dy - 2 * dx;
							}
							arr.push_back(x);
							arr.push_back(y);
						}
					}



					drawDistance = drawData[4 + j] - drawData[2 + j];

					val = drawData[4 + j] - drawData[2 + j];

					if (val < 0)
					{
						x1 = drawData[2 + j];
						y1 = drawData[3 + j];

						x2 = drawData[4 + j];
						y2 = drawData[5 + j];

						dx = abs(x2 - x1);
						dy = abs(y2 - y1);

						p = 2 * dy - dx;

						x = x1;
						y = y1;

						arr.push_back(abs(x));
						arr.push_back(abs(y));

						while (x2 <= x)
						{
							if (p < 0)
							{
								y = y + 1;
								p = p - 2 * dx;
							}
							else
							{
								x = x - 1;
								y = y + 1;
								p = p + 2 * dy + 2 * dx;
							}
							arr.push_back(abs(x));
							arr.push_back(abs(y));
						}
					}
					else if (val > 0)
					{
						for (int v = drawDistance; v > 0; v--)
						{
							arr.push_back(drawData[4 + j] - v);
							arr.push_back(drawData[3 + j]);
						}
					}

					val = drawData[4 + j] - drawData[0 + j];

					if (val < 0)
					{
						x1 = drawData[0 + j];
						y1 = drawData[1 + j];

						x2 = drawData[4 + j];
						y2 = drawData[5 + j];

						dx = abs(x2 - x1);
						dy = abs(y2 - y1);

						p = 2 * dy - dx;

						x = x1;
						y = y1;

						arr.push_back(abs(x));
						arr.push_back(abs(y));

						while (x2 <= x)
						{
							if (p < 0)
							{
								y = y + 1;
								p = p + 2 * dx;
							}
							else
							{
								x = x - 1;
								y = y + 1;
								p = p + 2 * dy + 2 * dx;
							}
							arr.push_back(abs(x));
							arr.push_back(abs(y));
						}
					}
					else if (val == 0)
					{
						for (int v = drawDistance; v > 0; v--)
						{
							arr.push_back(drawData[4 + j] - v);
							arr.push_back(drawData[3] + j);
						}
					}
					else if (val > 0)
					{
						x1 = drawData[0 + j] + 1;
						y1 = drawData[1 + j] + 1;

						x2 = drawData[4 + j] - 1;
						y2 = drawData[5 + j] - 1;

						dx = x2 - x1;
						dy = y2 - y1;

						p = 2 * dy - dx;

						x = x1;
						y = y1;

						arr.push_back(x);
						arr.push_back(y);

						while (x <= x2)
						{
							if (p < 0)
							{
								x = x + 1;
								p = p + 2 * dy;
							}
							else
							{
								x = x + 1;
								y = y + 1;
								p = p + 2 * dy - 2 * dx;
							}
							arr.push_back(x);
							arr.push_back(y);
						}

					}


					arr.push_back(drawData[4 + j]);
					arr.push_back(drawData[5 + j]);


					int drawInfoLength = arr.size();

					
				}

				int drawInfoLength = arr.size();

				for (int i = 0; i < drawInfoLength; i++, i++)
				{
					if (window.CurrentX == arr[i])
					{
						if (window.CurrentY == arr[i + 1])
						{
							//std::cout << (char)219u;
							std::printf("#");
							std::fflush(stdout);
							window.CurrentX++;
						}
					}
				}
			}
			}

			std::printf(" ");
			std::fflush(stdout);
		}

		std::printf("\n");
		std::fflush(stdout);
	}

}

