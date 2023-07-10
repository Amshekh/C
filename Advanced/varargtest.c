#include <stdio.h>
#include <stdarg.h>

double AddSub(char pattern[], double first, ...)
{
	va_list myargs;
	double result = first;
	int i;

	va_start(myargs, first);
	for(i = 0; pattern[i] != 0; ++i)
	{
		double value = va_arg(myargs, double);
		if(pattern[i] == '+')
			result += value;
		else if(pattern[i] == '-')
			result -= value;
	}
	va_end(myargs);

	return result;
}

int main(void)
{
	double x, y, z, r;
	
	printf("Enter three real values: ");	
	scanf("%lf%lf%lf", &x, &y, &z);

	r = AddSub("+-+", 9.9, x, y, z);

	printf("Result = %lf\n", r);
}



















