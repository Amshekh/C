#include <stdio.h>

long width = 0;
long height = 0;
long perim = 0;

int main(void)
{
	printf("Enter width and height: ");
	scanf("%ld%ld", &width, &height);

	perim = 2 * (width + height);

	printf("Perimeter = %ld\n", perim);
}















