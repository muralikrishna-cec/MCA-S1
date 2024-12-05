#include<stdio.h>
 int sum(int x,int y);
 
 void main()
 {
 int num1,num2;
 
 printf("enter two numbers");
 scanf("%d %d",&num1,&num2);
 printf("sum of Two Number %d & %d = %d",num1,num2,sum(num1,num2));
 }
 int sum(int x,int y)
 {
  return x+y;
 }
 
