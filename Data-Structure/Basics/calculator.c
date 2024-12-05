#include <stdio.h>
void main()
{

float num1,num2;
char ch;

printf("This is a calculator with operations +-*/  \n");
printf("enter the choice +-> add,- ->sub, * -> mul, / -> div  E-> exit\n");
scanf("%c",&ch);


if (ch == 'E')
{
printf("EXIT");
}

else
{
printf(" enter the number \n");
scanf("%f",&num1);

printf("enter the number ");
scanf("%f",&num2);



     switch(ch)
        {
          case '+': printf("\n addition of %f & %f =%f",num1,num2,(num1+num2));
                    break;
          case '-': printf("\n differnce of %f & %f =%f",num1,num2,(num1-num2));
                    break;    
                    
          case '*': printf("\n product of %f & %f =%f",num1,num2,(num1*num2));
                    break;
                    
          case '/': if(num2==0)
                    {
                      printf("DIVIDE BY ZERO CANT PERFORMED");
                     }
                     else
                     {
                        printf("\n Division of %f & %f =%f",num1,num2,(num1/num2));
                        break; 
                     }              

          default: printf(" \n no entered the valid choice");
                   break;
         }

}

}
