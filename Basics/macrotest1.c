#include "powers.h"
#include <stdio.h>

int main(void)
{
	double value = 0, result = 0;

	printf("Value: ");
	scanf("%lf", &value);

	result = CUBE(value);

	printf("Result = %lf\n", result);
}

