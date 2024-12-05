#include<stdio.h>

void main()
{
int marks;

printf("Enter the marks");
scanf("%d",&marks);

if(marks >= 80 && marks<= 100)
{
  printf("Congrats You got A+");
} 

else if(marks >= 70 && marks <80)
{
  printf("Congrats you got B+");
}
else if(marks >= 60 && marks <70)
{
  printf("Congrats you got B");
}
else if(marks >= 50 && marks <60)
{
  printf("Congrats you got C+");
}
else if(marks >= 0 && marks <50)
{
  printf("Congrats you got C");
}
else
{
  printf("Enter  valid marks");
}

}
