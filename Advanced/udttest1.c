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
	v = GetBoxVolume(mybox);

	printf("Box volume = %ld\n", v);
}


















