#include<stdio.h>

#define MAX 5

int queue[MAX];
int front=-1,rear=-1;


//enqueue
void enqueue()
{
  int x;

  // Check for queue overflow condition
  if((rear+1) % MAX == front)
  {
    printf("\n QUEUE IS OVER FLOW \n");
    return;
  }

  printf("Enter the element to insert ");
  scanf("%d",&x);

  // Check if the queue is empty
  if(front==-1 && rear==-1)
  {
    front=rear=0;
    queue[rear]=x; 
  }
  else
  {
    rear= (rear+1) % MAX;
    queue[rear]=x;
  }
   printf("\n ELEMENT %d  INSERTED SUCESSFULLY \n ",queue[rear]);
}

//dequeue
void dequeue()
{
    // Check for queue underflow condition
    if(front==-1 && rear==-1)
    {
        printf("\n QUEUE UNDER FLOW \n");
        return;
    }

    // Display the element being removed
    printf("\n %d is DELETED ",queue[front]);

    // If the queue has only one element, reset front and rear
    if(front==rear)
    {
       front=rear=-1;
    }
    else{
        front=(front+1)%MAX;
    }
}

//dsplay

void display()
{
    int i;
     // Check for queue underflow condition
    if(front==-1 && rear==-1)
    {
        printf("\n QUEUE UNDER FLOW \n");
        return;
    }
    printf("\nQUEUE ELEMENTS: ");

    i=front;

    while(1)
    {
      printf("%d ",queue[i]);
      if(i==rear)
      {
        break;
      }
      i=(i+1)%MAX;
    }
    printf("\n");
}


//main
int main()
{
   int choice;

    printf("\n CIRCULAR QUEUE USING ARRAYS \n");

   do{
        printf("\n1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
                switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:printf("\n Exiting.... \n");
                return 0;
            default:
                printf("\nINVALID CHOICE\n");
        }
   }while(choice!=4);

   return 0;
}