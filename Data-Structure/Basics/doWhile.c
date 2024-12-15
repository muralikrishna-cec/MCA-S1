#include<stdio.h>
void main()
{
  int limit;
  printf("Enter the limit");
  scanf("%d",&limit);
   do {
      printf("hi %d \n",limit);
      limit--;
    } while(limit>0);

}

