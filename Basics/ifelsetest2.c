#include <stdio.h>

int main(void)
{
	long stay, room;
	float rate;
	double rent;

	printf("Enter number of days: ");
	scanf("%ld", &stay);
	printf("1.Economy\n2.Business\n3.Executive\n4.Deluxe\n");
	printf("Enter room type(1-4): ");
	scanf("%ld", &room);

	if(room == 1)
		rate = 525;
	else if(room == 2)
		rate = 650;
	else if(room == 3)
		rate = 750;
	else
		rate = 975;
	rent = 1.05 * stay * rate;

	printf("Total rent = %.2lf\n", rent);
	
}





























