#include "Globals.h"

void mouse::move(Vector3 value)
{
	mouse_event(0x0001, value.x, value.y, 0, 0);
	Sleep(value.s);
}