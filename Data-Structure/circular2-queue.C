// 8. Write a menu driven program in C to implement circular queue using array.

#include <stdio.h>
#include <conio.h>

#define MAX 6

int queue[MAX],front=-1,rear=-1;

int isFull() {
    if((front == rear + 1) || (front == 0 && rear == MAX-1)) {
        return 1;
    }
    return 0;
}

int isEmpty() {
    if(front == -1) {
        return 1;
    }
    return 0;
}

void enqueue(int element) {
	if(isFull()) {
	    printf("Queue is full!");
	    getch();
	}
	else {
	    if(front == -1) {
	        front = 0;
	    }
	    rear = (rear + 1)%MAX;
	    queue[rear] = element;
	    printf("Inserted: %d", element);
	    getch();
	}
}

void dequeue() {
	int element;
	if(isEmpty()) {
	    printf("Queue is empty !");
	    getch();
	    return;
	}
	else {
	    element = queue[front];
	    if(front == rear) {
	        front = -1;
	        rear = -1;
	    }
	    else {
	        front = (front + 1)% MAX;
	    }
	    printf("Deleted element: %d", element);
	    getch();
	    return;
	}
}

void display() {
    int i;
    if(isEmpty()) {
        printf("Queue empty !");
        getch();
    }
    else {
        printf("Elements: ");
        for(i=front;i!=rear;i = (i+1)%MAX) {
            printf("%d ", queue[i]);
        }
        printf("%d",queue[i]);
        getch();
    }
}

void main() {
	int choice,x;
	while(1) {
	    clrscr();
	    printf(":: Circular Queue using array ::");
		printf("\n1. Insert an element");
		printf("\n2. Delete an element");
		printf("\n3. Display");
		printf("\n4. Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice) {
			case 1:
				printf("Enter element to insert: ");
				scanf("%d", &x);
				enqueue(x);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Wrong choice..");
				getch();
		}
	}
}


/***

:: Circular Queue using array ::
1. Insert an element
2. Delete an element
3. Display
4. Exit
Enter your choice: 1
Enter element to insert: 1
Inserted: 1

:: Circular Queue using array ::
1. Insert an element
2. Delete an element
3. Display
4. Exit
Enter your choice: 1
Enter element to insert: 2
Inserted: 2

:: Circular Queue using array ::
1. Insert an element
2. Delete an element
3. Display
4. Exit
Enter your choice: 1
Enter element to insert: 3
Inserted: 3

:: Circular Queue using array ::
1. Insert an element
2. Delete an element
3. Display
4. Exit
Enter your choice: 1
Enter element to insert: 4
Inserted: 4

:: Circular Queue using array ::
1. Insert an element
2. Delete an element
3. Display
4. Exit
Enter your choice: 3
Elements: 1 2 3 4

:: Circular Queue using array ::
1. Insert an element
2. Delete an element
3. Display
4. Exit
Enter your choice: 2
Deleted element: 1

:: Circular Queue using array ::
1. Insert an element
2. Delete an element
3. Display
4. Exit
Enter your choice: 3
Elements: 2 3 4

:: Circular Queue using array ::
1. Insert an element
2. Delete an element
3. Display
4. Exit
Enter your choice: 4

**/


