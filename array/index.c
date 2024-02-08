
// This program is used to print Index,int and address value

#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i[10] = {1,2,3,4,5,6,7,8,9,10};
      //index   =    0,1,2,3,4,5,6,7,8
        //printf("i = %d",i[8]);


        for(int k = 0;k < 10;k=k+1) // k++ ==> k=k+1
        {
                i[k] = rand();
                printf("%d ==> %d\n",k,i);
        }

        printf("i = %p\n",&i);
        printf("i[0] = %p\n",&i[0]);
        printf("\n");


        for(int j = 0;j <= 10;j++)
        {
                printf("[DRIECT] i[%d] ==> %d\n",j,i[j]);
                printf("[ADDRESS] i[%d] ==> %d = %d (%p)\n",j,*(i + j),(i+j));
        }
}