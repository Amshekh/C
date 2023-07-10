#include "box.h"
#include <stdio.h>

int main(void)
{
	Box mybox;
	short l, b, h;
	long v;

	printf("Enter box dimensions: ");
	scanf("%hd%hd%hd", &l, &b, &h);

	SetBoxDimensions(mybox, l, b, h);
	SetBoxThickness(mybox, 1);
	v = GetBoxVolume(mybox);

	printf("Inner volume = %ld\n", v);
}


















