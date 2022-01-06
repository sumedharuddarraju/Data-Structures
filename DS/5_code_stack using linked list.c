/******************************************************************************
Implement Stack using linked list
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top =NULL;

void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = x;
    newnode -> link =top;
    top = newnode;
}


void display()
{
    struct node *temp;
    temp = top;
    if(top == NULL)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%4d",temp->data);
            temp = temp ->link;
        }
    }
}

void pop()
{
    struct node *temp;
    temp = top;
    if(top == NULL)
    {
        printf("\nStack underflow!!!\n");
    }
    else
    {
        printf("%d\n ",top->data);
        top = top ->link;
    }
}

int main()
{
    int ch,d;
    while(1)
    {
         printf("Enter choice : 1. PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    scanf("%d",&ch);
        switch(ch)
    {
        case 1 : printf("Enter data");
                scanf("%d",&d);
                push(d);
                break;
        case 2 : pop();
        break;
        case 3 : display();
        break;
        case 4 :exit(0);
        default :printf("Enter between 1 to 4 ");
    }
}
 return 0;
        
}
    

