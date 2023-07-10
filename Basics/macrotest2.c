#include "powers.h"
#include <stdio.h>

int main(void)
{
	register int i, n;
	
	for(i = 1; i <= 10; i++)
	{
		#ifdef _HIGH	// conditional-compilation
		n = CUBE(i);
		#else
		n = SQUARE(i);
		#endif

		printf("%d\t%d\n", i, n);
	}
}

