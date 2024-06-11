#include "Input.h"

using namespace CGE;

int Input::isKeyDown()
{
	return _kbhit();
}

int Input::getKeyCode()
{
	return _getch();
}
