/*Memory assigned to a program in a typical architecture can be broken down in to 4 segments :
  1.Code    ----> Text segment
  2.Static/global variables 
    a.Data segment(Inititalised storage)    ---> We declare int i=10; 
    b.BSS segment (Uninitialised storage)   ---> We declare int i;
  3.Stack
  4.Heap
*/



#include<stdio.h>
#include<string.h>

int main(){
/*Use of malloc*/
  // int *ptr;
  // int n;
  // printf("ENTER THE SIZE OF ARRAY\n");
  // scanf("%d",&n);
  
  // ptr= (int*)malloc(n*sizeof(int));
  // for (int i = 0; i < n; i++)
  // {
  //   printf("Enter the %d of the array \n",i);
  //   scanf("%d",&ptr[i]);
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   printf("The number at array %d is %d\n",i,ptr[i]);
  // }
  
/*Use of callco*/

  int *ptr;
  int n;
  printf("ENTER THE SIZE OF ARRAY\n");
  scanf("%d",&n);
  
  ptr= (int*)calloc(n,sizeof(int));
  for (int i = 0; i < n; i++)
  {
    printf("Enter the %d of the array \n",i);
    scanf("%d",&ptr[i]);
  }
  for (int i = 0; i < n; i++)
  {
    printf("The number at array %d is %d\n",i,ptr[i]);
  }
  


  return 0;
}