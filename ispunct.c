
// This program is used to find special character or not such as @, #, $, %, &, * and +.

#include <stdio.h>
#include <ctype.h>

int main()
{
        int a;

        printf("Enter your check value: ");
        scanf("%c",&a);                         // get user value

        if(ispunct(a))
        {
                printf("This symbols is ispunct");      // If special character it's print this line
        }
        else{
                printf("This symbols is Not ispunct");  // If not special character it's print this line
        }
}