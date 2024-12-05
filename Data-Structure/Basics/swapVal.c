#include<stdio.h>
int swapVal();

void main()
{
  printf("value after swap num1= %d num2=%d",swapVal());
}

int swapVal()
{
int a,b,t;
printf("Enter two number to swap");
scanf("%d %d",&a,&b);
 printf(" value before swap num1=%d num2 = %d",a,b);
 t=a;
 a=b;
 b=t;
 
 return a,b;
}
