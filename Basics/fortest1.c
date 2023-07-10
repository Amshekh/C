#include <stdio.h>

int main(void)
{
	long number, a, b, c, digits;
	
	printf("Enter a positive integer: ");
	scanf("%ld", &number);
	
	for(a = 1, b = number, c = 0; a <= b; ++c)
	{
		a *= 10;
	}

	digits = c;
	
	printf("Number of digits = %ld\n", digits);
}


















