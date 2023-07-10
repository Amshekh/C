#include <stdio.h>

long array[] = {111, 222, 333, 444, 555, 666, 777, 888};

int main(void)
{
	int index = 0;
	long value = 0;

	printf("Enter index(0-7): ");
	scanf("%d", &index);
	
	value = array[index];

	printf("Value at index %d is %ld\n", index, value);
	puts("Goodbye.");
			
}
















