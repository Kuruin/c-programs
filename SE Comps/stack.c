#include <stdio.h>
#include<stdlib.h>
// #include<conio.h>
int top = -1, n, stack[100];
#define SIZE 100
void push();
void pop();
// void display();
void main()
{
    int option;
    do
    {
        printf("Choose a option from below \n");
        printf("1. Push\n2. Pop\n3. Display\n4.Exit\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            push();
            break;

        case 2:

            pop();
            break;

        case 3:

            // display();
            printf("You choose display");
            break;

        case 4:

            exit(0);
            break;
        default:
            printf("Enter a valid choice");
        }
    } while (option != 4);
}
void push()
{
    if (top == SIZE - 1)
    {
        printf("STACK OVERFLOW!!");
    }
    else
    {
        top++;
        printf("Enter a number ");
        scanf("%d", &stack[top]);
    }
}
void pop()
{
    int item;
    if (top == -1)
    {
        printf("STACK UNDERFLOW !!");
    }
    else
    {
        item == stack[top];
        top--;
        printf("The popped item is: %d", item);
    }
}
