#include "Globals.h"

void threads::binds()
{
	while (1)
	{
		if (GetAsyncKeyState(s.enableKey) & 1 && !s.enabled) s.enabled = true;
		if (GetAsyncKeyState(s.disableKey) & 1 && s.enabled)  s.enabled = false;

		if (GetAsyncKeyState(s.yKey1) & 1 && s.movementValues.y != 50) s.movementValues.y++;
		if (GetAsyncKeyState(s.yKey2) & 1 && s.movementValues.y != 0) s.movementValues.y--;

		if (GetAsyncKeyState(s.killProcKey)) exit(0);

		Sleep(1);
	}
}