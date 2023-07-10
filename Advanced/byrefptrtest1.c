#include <stdio.h>

/*
void Swap(double x, double y)
{
	double z = x;
	
	x = y;
	y = z;
}
*/

void Swap(double* x, double* y)
{
	double z = *x;

	*x = *y;
	*y = z;
}

int main(void)
{
	double a = 2.3, b = 3.2;

	printf("Original values: a = %lf, b = %lf\n", a, b);
	//Swap(a, b);
	Swap(&a, &b);
	printf("Swapped values: a = %lf, b = %lf\n", a, b);
}


















