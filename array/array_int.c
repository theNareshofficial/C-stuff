
// This program is used to print array value in for loop

#include <stdio.h>

int main()
{
	int num[10] = {1,2,3,4,5,6,7,8,9,10};	

	for(int i = 0; i < 10; i++)
	{
		printf("a[%d] => %d \n",i,num[i]);	// Displaying difference between index value and int value. 
	}
}
