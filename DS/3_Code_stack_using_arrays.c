//Write a program that implement stack (its operations) using Arrays

#include <stdio.h>
#include<stdlib.h>
#define MAX 10
int top=-1;
int stack[MAX];

void push(int d)
{
    if(top >= MAX)
        printf("\nStack overflow\n ");
    else
        stack[++top] = d;
}
int pop()
{
    if(top < 0)
        printf("\nStack underflow \n");
    else
        return stack[top--];
}
void display()
{
    int i;
    if(top < 0)
    printf("\nStack empty\n");
    else
    {
        for(i=0;i<=top;i++)
        printf("%d ",stack[i]);
    }    
}
int main()
{
    int ch,d,x;
    while(1)
    {
        printf("\nEnter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nEnter data : ");
                    scanf("%d",&d);
                    push(d);
                    break;
            case 2: x=pop();
                    printf("%d",x);
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default : printf("\nEnter b/w 1 - 4 ");
        }
    }
    return 0;
}
