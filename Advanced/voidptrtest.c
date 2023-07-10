#include <stdio.h>

typedef struct{
	long id;
	short hours;
	float rate;
}Employee;

typedef struct{
	short id;
	short age;
	double score;
}Student;

void Serialize(void* source, int size)
{
	unsigned char* bytes = source;
	int i;

	for(i = 0; i < size; i++)
		printf("%x", bytes[i]);

	printf("\n");
}

#define SERIALIZE(X) Serialize(&X, sizeof(X))

int main(void)
{
	Employee jack = {105, 190, 75};
	Student jill = {34, 19, 67.89};

	printf("Serialized view of jack: ");
	Serialize(&jack, sizeof(jack));

	printf("Serialized view of jill: ");
	SERIALIZE(jill);
}

















