#include "box.h"

void SetBoxDimensions(Box box, short length, short breadth, short height)
{
	box[0] = length;
	box[1] = breadth;
	box[2] = height;
	box[3] = 0;
}

void SetBoxThickness(Box box, short thickness)
{
	box[3] = thickness;
}

long GetBoxVolume(Box box)
{
	return (box[0] - 2 * box[3])
		 * (box[1] - 2 * box[3])
		 * (box[2] - 2 * box[3]);
}
















