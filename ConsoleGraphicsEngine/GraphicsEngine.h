#pragma once
#include <string>
#include <vector>
#include <stdio.h>
#include <thread>
#include <iostream>
#include <conio.h>


#define CGE_Triangles GraphicsEngine::DrawDataType::Triangle
#define CGE_Point GraphicsEngine::DrawDataType::Point



namespace CGE
{
	class GraphicsEngine
	{
	public:
		//Window Structure
		struct Window
		{
			int windowWidth, windowHeight, CurrentX, CurrentY;
		};

		enum class DrawDataType
		{
			None = 0, Point, Triangle, Square
		};

		// Creating Instances
		static Window createWindow(int x, int y);
		static GraphicsEngine createGraphicsEngine();

		//Draws to the Screen
		static void draw(Window window, GraphicsEngine ge, int drawData[], int drawDataLength, DrawDataType ddt);
	};
}
