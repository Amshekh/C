#include <stdio.h>

double values[] = {1.23, 2.34, 3.45, 4.56, 5.67};

int main(void)
{
	double* p1 = &values[2];
	double* p2 = p1 + 2;
	double* p3 = p1 - 2;

	printf("Original pointer is %p and it points to %lf\n", p1, *p1);
	printf("Forward pointer is %p and it points to %lf\n", p2, *p2);
	printf("Backward pointer is %p and it points to %lf\n", p3, *p3);
	printf("Value at index 1 from original pointer is %lf\n", p1[1]);
}
















