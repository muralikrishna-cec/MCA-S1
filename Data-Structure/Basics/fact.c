#include<stdio.h>
void main()
{
 int i,num,fact=1;
  printf("enter the limit");
 scanf("%d",&num);
 
 for(i=1;i<=num;i++){
    fact=fact*i;
 }
 printf("Factorial = %d",fact);
}
