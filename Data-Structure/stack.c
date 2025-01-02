#include<stdio.h>
int stack[20],top=-1,choice,n,val,i;
 void push();
 void pop();
 void display();
 void peek();

void main()
{

  printf("**************STACK**************");
  printf("\n Enter the stack operatio 1-> push; 2->pop; 3-> peek; 4-> display; 5->stop");
  printf("\n Enter the size of stack ");
  scanf(" %d",&n) ;

do{
   
   printf("\n Enter the choice  ");
   scanf(" %d",&choice);
   
   switch(choice){
     case 1 : push();
             break;
             
     case 2 : pop();
              break;
              
     case 3 : peek();
              break;
      
     case 4 : display();
              break;
              
     case 5 : printf("\n Exit");
             break;         
              
     default : printf("Enter a valid choice");
               break;                                   
    }
  }while(choice !=5);
   
}


void push()
{
 if(top >n-1) {
   printf("Stack Overflow");
 }
 else{
   top++;
   printf("Enter the element ");
   scanf(" %d",&val);
   stack[top]=val;
   printf("\n Element insetred succesfully");
 }
}


void pop()
{
 if(top<=-1){
  printf("\n Stack under flow");
 }
 else{
   printf(" \n %d is popped",stack[top]);
   top--;
   printf("Element popped Sucessfully");
 }
}


void peek()
{
 if(top<=-1){
   printf("\n Stack under flow");
 }
 else{
  printf(" \n Top Element = %d",stack[top]);
 }
}


void display()
{
 if(top <= -1){
   printf("\n Stack is under flow");
 }
 else{
   for(i=top;i>=0;i--) {
      printf("\n %d",stack[i]);
   }
 }
}


