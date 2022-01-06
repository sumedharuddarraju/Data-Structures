//Write a program that implement Queue (its operations) using Arrays
#include <stdio.h>
#include<stdlib.h>
#define MAX 10
int q[MAX],front,rear;

void Insert(int d)
{
    if(rear >= MAX)
    {
        printf("\nQueue overflow\n");
    }
    else
    {
        q[rear++]=d;
    }
}

int delete()
{
    if(front >= rear)
    {
        printf("\nQueue underflow\n ");
    }
    else
    {
        return q[front++];
    }
}

void Display()
{
    int i;
    if(front >= rear)
    {
        printf("\nQueue is empty\n ");
    }
    else
    {
        for(i=front;i<rear;i++)
        {
            printf("%d ",q[i]);
        }
    }
}

int main()
{
   int ch,d,k;
   while(1)
   {
       printf("\nEnter your choice\n");
       scanf("%d",&ch);
       switch(ch)
       {
            case 1 : printf("\nEnter data to insert : ");
                    scanf("%d",&d);
                    Insert(d);
                    break;
            case 2 : k = delete();
                    printf("\n%d is deleted\n ",k);
                    break;
            case 3 : Display();
                    break;
            case 4 : exit(0);
            default : printf("\nEnter numbers b/w 1 - 4 ");
           
        }
   }

    return 0;
}
