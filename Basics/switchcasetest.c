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

	switch(room)
	{
	case 1:
		rate = 525;
		break;
	case 2:
		rate = 650;
		break;
	case 3:
		rate = 750;
		break;
	default:
		rate = 975;
	}
	rent = 1.05 * stay * rate;

	printf("Total rent = %.2lf\n", rent);
	
}





























