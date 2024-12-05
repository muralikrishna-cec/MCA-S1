#include<stdio.h>
#include<stdlib.h>


struct node
{
   int data;
   struct node *Llink;
   struct node *Rlink;
};
   
   struct node *head=NULL;
   
   //insert first
   void insertFirst()
   {
     struct node *newnode;
     newnode=(struct node*)malloc(sizeof(struct node));
     
     if(newnode==NULL){
      printf("\n No Space available");
      return;
     }
     
     newnode->Llink,newnode->Rlink=NULL;
     
     printf("\n Enter the element to insert");
     scanf("%d",&newnode->data);
     
     if(head==NULL){
      head=newnode;
     }
     else{
      newnode->Rlink=head;
      head=newnode;
     }
     printf("\n %d inserted sucessfully",newnode->data);
   
   }
   
   
   //insert last
   void insertLast()
   {
     struct node *newnode,*temp=head;
     newnode=(struct node*)malloc(sizeof(struct node));
    
     if(newnode==NULL){
        printf("\n No space available");
        return;
     }
     newnode->Llink,newnode->Rlink=NULL;
    
     printf("\n enter the element to insert");
     scanf("%d",&newnode->data);
    
     if(head==NULL){
        head=newnode;
     }
     else{
          while(temp->Rlink!=NULL) {
              temp=temp->Rlink;
            }
          newnode->Llink=temp;
          temp->Rlink=newnode;
     }
     printf("%d inserted succesfully",newnode->data);
   }
   

 //insert Location
 void insertLocation()
 {
   struct node *newnode,*temp=head,*nxt;
   int key;
   newnode=(struct node*)malloc(sizeof(struct node));
   
   if(newnode==NULL){
    printf("\n No space Available \n");
    return;
   }
   if(head==NULL){
     printf("\n List is empty \n");
   }
   else{
        printf("\n enter the key were after you want to insert the element \n");
        scanf("%d",&key);

        while(temp!=NULL && temp->data!=key){
              temp=temp->Rlink;
          }

        if(temp==NULL){
            printf("\n NO ELEMENT FOUND \n");
            return;
        }
        printf("\n enter the element to insert \n");
        scanf("%d",&newnode->data);
         
        if(temp->Rlink==NULL){     //lastnode,firstnode
           newnode->Llink=temp;
           newnode->Rlink=NULL;
           temp->Rlink=newnode;
        }
        else{
           nxt=temp->Rlink;          //middle node
           newnode->Llink=temp;
           newnode->Rlink=temp->Rlink;
           temp->Rlink=newnode;
           nxt->Llink=newnode;
        }
      printf("%d inserted succesfully",newnode->data);
   }
 
 }  
    
   
 //delete first
 void deleteFirst()
 {
    struct node *temp=head,*nxt;
    
    if(head==NULL){
      printf("\n LIST EMPTY \n");
      return;
    }
    
    printf("\n %d is deleted",temp->data);
    if(temp->Rlink==NULL){ //single node
      head=NULL;
   }
   else{ 
       nxt=temp->Rlink;
       head=nxt;
       nxt->Llink=NULL;
   }
    free(temp);
 }
   
   
 //delete last
 void deleteLast()
 {
  struct node *temp=head,*nxt;
  
  if(head==NULL){
    printf("\n LIST IS EMPTY \n");
    return;
  }
    
  if(temp->Rlink==NULL){
    printf("\n %d is deleted",head->data);
    head=NULL;     
  }
  else{
      while(temp->Rlink!=NULL){
       temp=temp->Rlink;
      }
      printf("\n %d is deleted",temp->data);
      nxt=temp->Llink;
      nxt->Rlink=NULL;
  }
   free(temp);

 }   
   

 //deletelocation  
 void deleteLocation()
 {
    struct node *temp=head,*nxt,*nxt1;
    int key;
    
    if(head==NULL){
       printf("\n LIST IS EMPTY \n");
       return;
    }
    
    printf("\n enter the key which you want to delete \n");
    scanf("%d",&key);
     
        while(temp!=NULL && temp->data!=key){
             temp=temp->Rlink;
        }
        if(temp==NULL){
           printf("\n NO ELEMENT FOUND \n");
           return;
        }
        if(temp->Llink==NULL && temp->Rlink==NULL){  //single node
          head=NULL;
        }
        else if(temp->Rlink==NULL){  //last node
         nxt=temp->Llink;
         nxt->Rlink=NULL;
        }
        else{ 
            nxt=temp->Rlink;
            nxt1=temp->Llink;
            
            nxt->Llink=nxt1;
            nxt1->Rlink=nxt;
        }     
       
    printf("%d Deleted succesfully",temp->data); 
    free(temp); 
       
    
 }
   
 //display
 void display()
 {
    struct node *temp=head;
    
    if(head==NULL){
       printf("\n NO ELEMENTS IN LIST");
       return;
    }
    else{
       printf("**\n ELEMENTS IN LIST** \n");
       while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->Rlink;
       }
    }
   
 }
   
   
 //search
 void search()
 {
   int key,pos=0,found=0;
   struct node *temp=head;
  
   if(head==NULL){
      printf("\n LIST EMPTY \n");
      return;
    }
  
    printf("\n enter the key to search");
    scanf("%d",&key);
  
    while(temp!=NULL){
        if(temp->data==key){
           printf("%d is found at location %d",temp->data,pos);
           found=1;
        }
        temp=temp->Rlink;
        pos++;
  }
  
  if(!found){
     printf("\n ELEMENT NOT FOUND \n");
  }
 
 }  
   
   
   //main
 void main()
 {
    int choice;
    
    do{
       printf("\n*****DOUBLY LINKEDLIST ****\n");
       printf("\n 1-> insert first \n 2->insert last \n 3->insert Location \n 4->delete fisrt \n 5->delete Last \n 6->delete Location \n 7-> search \n 8->Display \n 9->exit \n");
       printf("enter the choice ");
       scanf("%d",&choice);
       
       switch(choice) {
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
        case 9: printf("\nEXIT\n");
                exit(0);
        default: printf("enter valid choice");
                 break;                         
       }
    }while(choice!=9);
   
  }  


