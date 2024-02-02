
// This program is used to how to increase variable value.
// This program name called Cout++

#include <stdio.h>

int main()
{
	int j = 10;	// I assigned J value 10 (j = 10)
	int x;		// create empty int variable

	x = j++; 	// Increase one value in J eg : j+1 = 11 

        printf("%d\n",x); 	// Output : 10
        printf("%d\n",j);	// Output : 11
        printf("%d\n",x);	// Output : 10

	x = j + 5;		// Increase 5 value in j eg : j+5 = 16

	printf("%d\n",j);	// Output : 11
	printf("%d\n",x);	// Output : 16

}
