#include <stdio.h>

double Average(double x, double y, double* dev)
{
	*dev = x > y ? (x - y) / 2 : (y - x) / 2;

	return (x + y) / 2;
}

int main(void)
{
	double a, b, m, d;
	
	printf("Enter two real values: ");
	scanf("%lf%lf", &a, &b);
	
	m = Average(a, b, &d);

	printf("Average is %lf with a deviation of %lf\n", m , d);
}












