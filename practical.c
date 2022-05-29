#include <stdio.h>


int main()
{
    int i;
    const int SIZE =5;
   /* a.) */ unsigned int values[5]={3,4,5,6,7};

   /* b.) */  unsigned int *vPtr;

   /* c.) */  for (i = 0; i < SIZE; i++)
              printf ("%d ", values[i]);

    /* d.) */  vPtr = values;
               vPtr = &values[0];   

     /* e.) /   / Answer: The memory address is :-> 1002502   and   The value stored is :-> 4
     */       
        printf("\nAddress is %d\n",vPtr);
        printf("Value stored is %d",vPtr[1]);   
    return 0;
}