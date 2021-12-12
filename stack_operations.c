#include <stdio.h>
#include <stdlib.h>
int a[50], top = -1, size = 10;
void push(int data)
{
    if (top == size - 1)
    {
        printf("overflow\n");
        return;
    }
    else
    {
        top = top + 1;
        a[top] = data;
    }
}
void pop()
{
    int temp;
    if (top == -1)
    {
        printf("cannot pop, underflow\n");
        return;
    }
    temp = top;
    printf("\n%d is popped out\n", a[temp]);
    top = top - 1;
}
void display()
{
    if (top == -1)
    {
        printf("underflow\n");
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
}
void peek()
{
    if (top == -1)
    {
        printf("underflow\n");
        return;
    }
    printf("\nthe top most element is %d", a[top]);
}
int main()
{
    int i, n, choice;

    while (1)
    {
        printf(" Which operation is to be performed?\n");
        printf("1. Push\n 2.Pop\n 3.Peek\n 4. Display\n any other number -exit\n");
        printf("enter your choice\n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            /*printf("enter size");
            scanf("%d",&size);
            for(i=0;i<size;i++)
            {*/
            printf("enter the number\n");
            scanf("%d", &n);
            push(n);

            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            exit(0);
        }
    }

    return 0;
}