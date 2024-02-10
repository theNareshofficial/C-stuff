
// This program is used to check memory address.

#include <stdio.h>

int  main()
{
	int a;

	printf("Enter Your Value : ");
	scanf("%d",&a);

	printf("Your Value %d, Memory byte address %d",a,sizeof(a));
}
