#pragma once

#include <string>
#include <vector>
#include <stdio.h>
#include <thread>
#include <iostream>
#include <conio.h>

#define ARROW_UP     72
#define ARROW_DOWN   80
#define ARROW_LEFT   75
#define ARROW_RIGHT  77

#define CGE_A 97
#define CGE_B 98
#define CGE_C 99
#define CGE_D 100
#define CGE_E 101
#define CGE_F 102
#define CGE_G 103
#define CGE_H 104
#define CGE_I 105
#define CGE_J 106
#define CGE_K 107
#define CGE_L 108
#define CGE_M 109
#define CGE_N 110
#define CGE_O 111
#define CGE_P 112
#define CGE_Q 113
#define CGE_R 114
#define CGE_S 115
#define CGE_T 116
#define CGE_U 117
#define CGE_V 118
#define CGE_W 119
#define CGE_X 120
#define CGE_Y 121
#define CGE_Z 122

#define CGE_0 48
#define CGE_1 49
#define CGE_2 50
#define CGE_3 51
#define CGE_4 52
#define CGE_5 53
#define CGE_6 54
#define CGE_7 55
#define CGE_8 56
#define CGE_9 57

namespace CGE
{
	class Input
	{
	public:
		static int isKeyDown();
		static int getKeyCode();
	};
}