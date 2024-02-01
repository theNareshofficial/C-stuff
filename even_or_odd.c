
// This program is used to check Even number or Odd number.

#include <stdio.h>

int is_even(int num)
{
	if(num%2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n;

	while(1)
	{
		printf("Enter the Number : ");
		scanf("%d", &n);

		if(n == 0)
		{
			break;  //break is a keyword.
		}
		if(is_even(n))
		{
			printf("This Number is Even...\n");
		}
		else
		{
			printf("This Number is Odd...\n");
		}
	}
}
