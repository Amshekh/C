#include <stdio.h>

int main(void)
{
	float outer = 0, inner = 0;
	double frame = 0;

	printf("Enter outer and inner width: ");
	scanf("%f%f", &outer, &inner);

	frame = outer * outer - inner * inner;

	printf("Frame area = %.2lf\n", frame);
}




















