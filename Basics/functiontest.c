#include <stdio.h>

extern long LeastMultiple(long, long); // function declaration

int main(void)
{
	long l, m, n;

	printf("Enter two integers: ");
	scanf("%ld%ld", &m, &n);

	l = LeastMultiple(m, n);

	printf("L.C.M = %ld\n", l);

	return 9;
}

