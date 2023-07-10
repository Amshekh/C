#include <stdio.h>

struct Student
{
	long id;
	short age;
};

int main(void)
{
	struct Student jack = {11, 22};
	struct Student jill;
	struct Student other[5];

	jill.id = 12;
	jill.age = 21;
	other[2].id = 15;
	other[2].age = 23;
	
	printf("Jack's ID is %ld and Age is %hd\n", jack.id, jack.age);
	printf("Jill's ID is %ld and Age is %hd\n", jill.id, jill.age);

	return sizeof(struct Student);
}















