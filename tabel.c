
// This program is used to print which tables you want you can print

#include <stdio.h>

int main()
{
	int table;
	int mul;
	int j;

	printf("Enter Your Table : ");
	scanf("%d", &table);
	printf("Enter Your Table Pause : ");
	scanf("%d", &j);

	for(int i = 1; i <= j; i++)
	{
		mul =  i*table;
		printf("%d x %d = %d \n", table, i, mul);
	}
}

