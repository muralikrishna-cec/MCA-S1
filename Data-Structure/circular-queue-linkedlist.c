#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;


//enqueue
void enqueue()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));

    if(newnode == NULL)
    {
        printf("\n NO SPACE AVAILABLE \n");
        return;
    }

    newnode->next=NULL;

    printf("\n ENTER THE ELEMENT TO INSERT \n");
    scanf("%d",&newnode->data);

    if(rear==NULL)
    {
        front = rear = newnode;
        newnode->next=front;
    }
    else
    {
       rear->next=newnode;
       rear=newnode;
       newnode->next=front;
    }

    printf("%d INSERTED SUCCESSFULLY ",rear->data);
}

//dequeue
void dequeue()
{
    struct node *temp=front;

    if(front == NULL && rear == NULL)
    {
        printf("\n QUEUE UNDER FLOW \n");
        return;
    }

    printf("\n %d is Deleted \n",front->data);

    // Only one element in the queue
    if(front == rear)
    {
      front=rear=NULL; 
    }
    else  // More than one element
    {
      front=temp->next;
      rear->next = front;
    }
    free(temp);
   
}

//display
void display()
{
    struct node *temp=front;

    if(front == NULL && rear == NULL)
    {
        printf("\n QUEUE UNDER FLOW \n");
        return;
    }
  
        printf("\n QUEUE ELEMENTS ARE : ");

       do {
           printf("%d ", temp->data);
           temp = temp->next;
        } while (temp != front);
        printf("\n");
    }



//Main
int main()
{
    int choice;

    printf("\n CIRCULAR QUEUE USING LINKED LIST \n");

   do{
        printf("\n1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) 
        {

                 case 1: enqueue();
                         break;

                 case 2: dequeue();
                         break;

                 case 3: display();
                         break;
                         
                 case 4: printf("\n Exiting.... \n");
                         return 0;

                 default: printf("\n INVALID CHOICE \n");
                          break;
        }
   }while(choice!=4);

   return 0;
}