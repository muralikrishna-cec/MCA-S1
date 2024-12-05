#include<stdio.h>
void swapRef(int *x,int *y);
void main()
{
int num1,num2;

printf("enter the numbers to swap");
scanf("%d %d",&num1,&num2);
printf("\n Value before swap num1 = %d num2 = %d",num1,num2);
swapRef(&num1,&num2);
printf("\n Value after swap num1 = %d num2 = %d",num1,num2);
}

void swapRef(int *x,int *y)
{
  int t;
  t=*x;
  *x=*y;
  *y=t;
  
}


