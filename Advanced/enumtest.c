#include <stdio.h>

enum RoomType {Economy=1, Business, Executive, Deluxe};

int main(void)
{
	long stay;
	enum RoomType room;
	float rate;
	double rent;

	printf("Enter number of days: ");
	scanf("%ld", &stay);
	printf("1.Economy\n2.Business\n3.Executive\n4.Deluxe\n");
	printf("Enter room type(1-4): ");
	scanf("%ld", &room);

	switch(room)
	{
	case Economy:
		rate = 525;
		break;
	case Business:
		rate = 650;
		break;
	case Executive:
		rate = 750;
		break;
	default:
		rate = 975;
	}
	rent = 1.05 * stay * rate;

	printf("Total rent = %.2lf\n", rent);
	
}





























