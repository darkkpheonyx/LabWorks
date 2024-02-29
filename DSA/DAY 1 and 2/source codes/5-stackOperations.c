// write a menu based program to simulate the basic operations of stack.
#include <stdio.h>
#define MAXSIZE 3
int stack[MAXSIZE];
int top = -1;

// to push data
void push(int ltop)
{
    if (ltop == MAXSIZE - 1)
        printf("\nThe stack is full.\n");
    else
    {
        printf("Enter the data: ");
        top++;
        scanf("%d", &stack[top]);
    }
}

// to pop data
void pop()
{
    if (top == -1)
        printf("\nThe stack is empty.\n\n");
    else
    {
        printf("%d", stack[top]);
        top--;
    }
}

// to display data
void display(int ltop)
{
    printf("The data are:\n");
    for (int i = 0; i <= ltop; i++)
    {
        printf("%d ", stack[i]);
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n....STACK OPERATIONS...\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter you choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push(top);
            break;
        case 2:
            pop();
            break;
        case 3:
            display(top);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("you didnt choose the right option.");
        }
    }
}
