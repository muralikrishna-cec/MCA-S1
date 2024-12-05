#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *link;
};

struct node *head=NULL;

//insert first
void insertFirst()
{
  struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  
  if(newnode == NULL)
  {
    printf("\n NO space avilable \n");
    return;
  }
  
    newnode->link=NULL;
    printf("\n Enter the value to insert to Front \n");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
      head=newnode;
    }
    else
    {
     newnode->link=head;
     head=newnode;
    }
    
    printf("\n Element inserted %d",newnode->data);
  
  }




//insert last
void insertLast()
{
  struct node *temp=head,*newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  
  if(newnode==NULL)
  {
    printf("\n No space Available\n");
    return;
  }
    newnode->link=NULL;

    printf("\n Enter the element to insert Last \n ");
    scanf("%d",&newnode->data);
   
    if(head==NULL)
    {
      head=newnode;
    }
    else
    {
     while(temp->link!=NULL)
     {
       temp=temp->link;
     }
      temp->link=newnode;
    
    }
    printf("element inserted successfully  %d",newnode->data);
  }




//insert location
void insertLocation()
{
  int key;
  struct node *temp=head,*newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  if(newnode ==NULL)
  {
   printf("\n No space available \n");
   return;
  }
  
  newnode->link=NULL;
    if(head==NULL)
      {
       printf("\n LIST empty \n");
      }
      else
      {
        printf("\n Enter the key were after you want to add Element \n");
        scanf("%d",&key);
         
        while(temp!=NULL && temp->data!=key)
         {
           temp=temp->link;
         }
         if(temp==NULL)
          {
            printf("\n Value Not Exist\n");
          }
          else
           {
             printf("\n Enter the Element to inserted\n");
             scanf("%d",&newnode->data);
             newnode->link=temp->link;
             temp->link=newnode;
             printf("value inserted successfully %d",newnode->data); 
            } 
          }
      }




//delete first
void deleteFirst()
{
 if(head==NULL)
  {
   printf("\n List Empty\n");
   return;
  }
  struct node *temp =head;
  head=temp->link;
  printf("\n Value deleted %d \n",temp->data);
  free(temp);

}

//delete last
void deleteLast()
{
 if(head==NULL)
  {
   printf("\n Empty list \n");
   return;
  }
  
  struct node *temp=head,*prev=NULL;
  if(temp->link==NULL)
   {
    printf("\n Value %d deleted",temp->data);
    free(temp);
    head=NULL;
    return;
   }
   
   while(temp->link!=NULL)
    {
     prev=temp;
     temp=temp->link;
    }
    printf("\nvalue %d deleted\n",temp->data);
    prev->link=NULL;
    free(temp);
}



//delete location
void deleteLocation()
{
 int key;
 struct node *temp=head,*prev=NULL;
 
 if(head==NULL)
  {
   printf("\n Empty list \n");
   return;
  }
  
  printf("\n Enter the element that you want to delete\n");
  scanf("%d",&key);
   
   if(temp->data ==key)
   {
     head=temp->link;
     printf("\n value %d is deleted \n",temp->data);
     free(temp);
     return;
   }
   
   while(temp!=NULL && temp->data!=key)
    {
      prev=temp;
      temp=temp->link;
    }
    
    if(temp==NULL)
     {
      printf("\n Value Not exsist \n");
      return;
     }
    prev->link=temp->link;
    printf("value %d is deleted",temp->data);
    free(temp);  
}



//search
void search()
{
  struct node *temp=head;
  int pos=0,found=0,val;
  
  if(head==NULL)
   {
     printf("\n Empty List \n");
     return;
   }
   
   printf("\n Enter the value to search");
   scanf("%d",&val);
   
   while(temp!=NULL)
    {
      if(temp->data == val)
       {
         printf("%d value found at %d location \n",temp->data,pos);
         found=1;
       }
       pos++;
       temp=temp->link;
    }
    
    if(!found)
     {
      printf("Value %d not exsist",val);
     }
}






//display
void display()
{
  struct node *temp=head;
 
   if(temp==NULL)
   {
     printf("\n List Empty");
     return;
   }
   printf("\n Elements in the List \n");
   while(temp!=NULL)
    {
      printf("%d ",temp->data);
      temp=temp->link;
    }
}



//Main
void main()
{
  int choice;
  printf("\n SINGLY LINKED LIST \n");
   
   do{
       printf("\n Enter the Choice \n 1 -> InsertFirst \n 2-> InsertLast \n 3-> Insert Location \n 4-> Delete first \n 5-> Delete last \n 6-> Delete location \n 8-> Display \n 7-> Search \n 9-> Exit");
       scanf("%d",&choice);
       
       switch(choice)
       {
          case 1: insertFirst();
                  break;
          case 2: insertLast();
                  break;  
          case 3: insertLocation();
                  break;   
          case 4: deleteFirst();
                  break;
          case 5: deleteLast();
                  break;        
          case 6: deleteLocation();
                  break;                  
          case 7: search();
                  break;                       
          case 8: display();
                  break;
          case 9:printf("\n Exit \n");
                 exit(0);       
                  
          default: printf("\n INVALID CHOICE \n");        
       
       
       }                         
   
   }while(choice!=9);


}




/*
Program Information:
  - Program Name: SINGLY LINKED LIST  
  - Coded By: CRISS CROSS
*/

