#include <stdio.h>

int main(void)
{
	int i, n;
	long sum = 0;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	for(i = 1; i <= n; ++i)
		sum += i;

	printf("Sum = %ld\n", sum);	
}











