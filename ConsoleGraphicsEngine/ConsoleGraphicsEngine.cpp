#include "CGE.h"

using namespace CGE;

int main()
{
	std::ios_base::sync_with_stdio(false);
	using std::operator""s;

	GraphicsEngine::Window window = GraphicsEngine::createWindow(90, 30);
	GraphicsEngine ge = GraphicsEngine::createGraphicsEngine();
		
	int triangle[] = {
		9, 9,
		6, 13,
		25, 13
	};

	int drawDataLength = sizeof(triangle) / sizeof(int);
	
	while (true)
	{
		int key;

		if (Input::isKeyDown()) {
			key = Input::getKeyCode();

			switch (key) {

			case ARROW_UP:
				triangle[1] = triangle[1] - 1;
				triangle[3] = triangle[3] - 1;
				triangle[5] = triangle[5] - 1;
				break;
			case ARROW_DOWN:
				triangle[1] = triangle[1] + 1;
				triangle[3] = triangle[3] + 1;
				triangle[5] = triangle[5] + 1;
				break;
			case ARROW_LEFT:
				triangle[0] = triangle[0] - 1;
				triangle[2] = triangle[2] - 1;
				triangle[4] = triangle[4] - 1;
				break;
			case ARROW_RIGHT:
				triangle[0] = triangle[0] + 1;
				triangle[2] = triangle[2] + 1;
				triangle[4] = triangle[4] + 1;
				break;
			default:
				
				break;

			}
		}

		GraphicsEngine::draw(window, ge, triangle, drawDataLength, CGE_Triangles);
		std::this_thread::sleep_for(0.155s);

		printf("\033c");
		fflush(stdout);
	}
	 
	return 0;
}