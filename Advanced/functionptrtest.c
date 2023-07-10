#include <stdio.h>

long AddAll(long last)
{
	long sum = 0;
	int i;

	for(i = 1; i <= last; i++)
	{
		sum += i;
	}

	return sum;
}

long AddEven(long last)
{
	long sum = 0;
	int i;

	for(i = 1; i <= last; i++)
	{
		if(i % 2 == 0)
			sum += i;
	}

	return sum;
}

typedef int (*Filter)(long);

long AddIf(long last, Filter check)
{
	long sum = 0;
	int i;

	for(i = 0; i <= last; i++)
	{
		if(check(i))
			sum += i;
	}

	return sum;
}

int IsOdd(long value)
{
	return value % 2;
}

int main(void)
{
	long limit, total;
	
	printf("Enter a positive integer: ");
	scanf("%ld", &limit);

	total = AddAll(limit);
	printf("Sum of all integers upto %ld is %ld\n", limit, total);

	total = AddEven(limit);
	printf("Sum of even integers upto %ld is %ld\n", limit, total);

	total = AddIf(limit, IsOdd);
	printf("Sum of odd integers upto %ld is %ld\n", limit, total);
}















