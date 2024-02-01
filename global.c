
// This program is used to find GLOBAL value and STATIC value.
// This print GLOBAL or STATIC value and value address.

#include <stdio.h>

int a = 10;
static int d = 10;

int main()
{
        static int b  = 10;
        int c = 10;


        printf("[GLOBAL] value of : %d, Address of : %p\n",a,&a);
        printf("[STATIC] value of : %d, Address of : %p\n",b,&b);
        printf("[STATIC] value of : %d, Address of : %p\n",d,&d);
        
} 