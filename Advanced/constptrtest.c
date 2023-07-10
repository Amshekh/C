#include <stdio.h>

struct Employee
{
	long id;
	short hours;
	float rate;
};

typedef struct Employee Emp_t;
	
double GetNetIncome(const Emp_t* emp)
{
	double income = (*emp).hours * emp->rate;
	short ot = emp->hours - 180;

	if(ot > 0)
		income += 50 * ot;

	//emp->id += 400;

	return income;
}

int main(void)
{
	Emp_t jack = {101, 186, 52};
	Emp_t jill = {102, 175, 62};

	printf("Jack's ID is %ld and Income is %.2lf\n", jack.id, 
		GetNetIncome(&jack));
	printf("Jill's ID is %ld and Income is %.2lf\n", jill.id, 
		GetNetIncome(&jill));
}















