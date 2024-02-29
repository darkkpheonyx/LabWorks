// write a menu based program to simulate the basic operations of Queue
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 3
int stack[MAXSIZE];
int front = -1;
int rear = -1;
int counter = -1;

// to enqueue data
void enqueue(int lrear)
{
    if (front == -1 && rear == -1) // increasing the front value only once for the first time
        front++;
    if (lrear == MAXSIZE - 1)
        printf("\nThe Queue is full.\n");
    else
    {
        printf("Enter the data: ");
        rear++;
        scanf("%d", &stack[rear]);
    }
}

// to dequeue data
int dequeue()
{
    if (counter == MAXSIZE - 1)
        printf("\nThe Queue has overflow (Front has reached to Rear).\nRestart the program to continue.\n");
    else if (front == -1)
        printf("\nThe Queue is empty.\n\n");
    else if (front <= rear)
    {
        printf("%d", stack[front]);
        counter++;
        front++;
    }
    else // to restrict dequeue if you enqueue and then dequeue but again dequeue then, front will keep increasing
        // so to prevent this crash above if statement is used
        printf("Data not entered yet.");
}

// to display data
void display(int lrear)
{
    printf("\nThe data are:\n");
    for (int i = front; i <= lrear; i++)
    {
        printf("%d ", stack[i]);
    }
}

// main program
int main()
{
    int choice;
    while (1)
    {
        printf("\n....LINEAR QUEUE OPERATIONS...\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("\nEnter you choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue(rear);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display(rear);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("you didnt choose the right option.");
        }
    }
}
