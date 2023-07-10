#include "box.h"

void SetBoxDimensions(Box box, short length, short breadth, short height)
{
	box[0] = length;
	box[1] = breadth;
	box[2] = height;
}

long GetBoxVolume(Box box)
{
	return box[0] * box[1] * box[2];
}

