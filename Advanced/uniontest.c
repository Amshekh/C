#include <stdio.h>

union Student
{
	long score;
	char grade;
};

int main(void)
{
	union Student jack = {72};
	union Student jill;

	jill.grade = 'B';

	printf("Jack's Score is %ld and Grade is %c\n", jack.score, jack.grade);
	printf("Jill's Score is %ld and Grade is %c\n", jill.score, jill.grade);

	return sizeof(union Student);
}













