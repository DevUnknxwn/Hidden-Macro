#include "Globals.h"

void threads::macro()
{
	while (1)
	{
		while (GetAsyncKeyState(s.key1) && GetAsyncKeyState(s.key2) && s.enabled)
		{
			mouse::move(s.movementValues);
		}

		Sleep(1);
	}
}