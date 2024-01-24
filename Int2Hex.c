
// This program is used for convert Integer to Hexadecimal

#include <stdio.h>

int main()
{
	int a;

	printf("Enter Your Value : ");
	scanf("%d", &a);

	printf("%#x\n",a);    // This output print with address and Hexadecimal
	printf("%x\n",a);     // This output print Hexadecimal in small letter
	printf("%X\n",a);     // This output print Hexadecimal in capital letter  	
}
