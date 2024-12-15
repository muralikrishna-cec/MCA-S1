#include<stdio.h>
#include<stdlib.h>

struct node{
 int data;
 struct node* link;
};
struct node *head=NULL;


//insertlast
void enqueue()
{
  struct node *temp=head,*newnode;
  
  newnode=(struct node*)malloc(sizeof(struct node));
  
  if(newnode ==NULL){
   printf("\n NO SPACE AVAILABLE \n");
   return;
  }
  newnode->link=NULL;
  
  printf("\n ENTER THE ELEMENT TO INSERT \n");
  scanf("%d",&newnode->data);
  
  if(head==NULL){
    head=newnode;
  }
  else{
      while(temp->link!=NULL) {
        temp=temp->link;
      }
      temp->link=newnode;
  }
  printf("\n  %d ELEMENT INSERTED SUCCESSFULLY \n",newnode->data);

}

// delete first
void dequeue()
{
  struct node *temp=head;
  
  if(head==NULL) {
   printf("\n NO ELEMENTS \n");
   return;
  }
  printf("\n %d IS DELETED \n",temp->data);
  head=temp->link;
  free(temp);
}

//display
 void display()
 {
   struct node *temp=head;
   
   if(head == NULL) {
     printf("\n NO ELEMENTS");
     return;
   }
   
   printf("\n ELEMENTS IN QUEUE ARE \n");
   while(temp!=NULL) { 
     printf("%d ",temp->data);
     temp=temp->link;
   }
 }
 
 //search
 void search()
 {
   struct node *temp=head;
   int key,pos=0,found=0;
 
   if(head==NULL){
     printf("\n QUEUE EMPTY\n");
     return;
   }
 
   printf("\n ENTER THE ELEMENT TO SEARCH \n");
   scanf("%d",&key);
 
   while(temp!=NULL){
     if(temp->data ==key){
       printf("\n %d ELEMENT FOUND AT %d \n",temp->data,pos);
       found=1;
     }
     temp=temp->link;
     pos++;
   }
 
   if(!found){
     printf("\n ELEMENT NOT FOUND");
   }

 }

 
 
 //main
 void main()
 {
   int choice;
   
   do{
     printf("\n *****QUEUE*****\n");
     printf("\n 1->Enqueue() \n 2-> Dequeue() \n 3-> display() \n 4->search() \n 5->EXIT");
     
      printf("\n ENTER THE CHOICE \n");
      scanf("%d",&choice);
      
      switch(choice) {
        case 1:  enqueue();
                 break;
        case 2:  dequeue();
                 break;
        case 3:  display();
                 break;  
        case 4:  search();
                 break;          
        case 5:  printf("\n EXIT \n");
                 break;
        
       default:  printf("Enter a valid Choice");   
                 break;            
      }
    
   }while(choice!=5);
  }
