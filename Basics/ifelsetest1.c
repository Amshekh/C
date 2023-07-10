#include <stdio.h>

int main(void)
{
	long array[] = {111, 222, 333, 444, 555, 666, 777, 888};

	int index = 0;
	long value = 0;

	printf("Enter index(0-7): ");
	scanf("%d", &index);

	if(index >= 0 && index < 8)
	{
		value = array[index];
		printf("Value at index %d is %ld\n", index, value);
	}
	else
	{
		printf("Invalid index!\n");
	}

	puts("Goodbye.");
			
}








































