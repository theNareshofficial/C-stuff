// This program is used to how to find character to ascii number
// Enter your char only no number.

#include <stdio.h>

int main()
{
        char a[100];
        int sum = 0;

        printf("Enter Your char value : ");
        scanf("%s",a);          // Get your char value 

        for(int i = 0;a[i] != '\0';i++)
        {
                sum = sum + a[i];
                printf("Your Ascii sum value : %d\n",sum);
        }
        
}