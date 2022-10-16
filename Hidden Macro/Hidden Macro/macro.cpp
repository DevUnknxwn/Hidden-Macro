#include "Globals.h"

void threads::macro()
{
	while (1)
	{
		while (GetAsyncKeyState(s.moveKeys.x) && GetAsyncKeyState(s.moveKeys.y) && s.enabled)
		{
			mouse::move(s.movementValues);
		}

		Sleep(1);
	}
}