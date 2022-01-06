//Write a program that uses functions to perform the following operations on singly linked list.: i) Creation ii) Insertion iii) Deletion iv) Traversal
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*first=NULL,*temp,*last;

void  create_node()
{
struct node *p;
p=(struct node*)malloc(sizeof(struct node));
printf("Enter the data");
scanf("%d",&p->data);
p->next=NULL;
if(first==NULL)
{
first=p;
temp=p;
}
else
{
temp->next=p;
temp=p;
}
}

void display_node()
{
struct node *i;
for(i=first;i!=NULL;i=i->next)
{
printf("%d ",i->data);
}
}
void delete_node()
{
int ch,pos;
struct node *del,*t1,*t2;
if(first==NULL)
{
printf("deletion not possible");
}
else if(first->next==NULL)
{
printf("There is only node");
del=first;
printf("%d",del->data);
free(del);
first=NULL;
}
else
{
printf("Enter you choice of deletion");
scanf("%d",&ch);
t1=first;
if(ch==1)
{
del=first;
first=first->next;
printf("%d",del->data);
free(del);
}
else if(ch == 2)
        {
            struct node *temp;
            temp = first;
            while(temp -> next ->next != NULL)
            {
                temp=temp->next;
            }
            del = temp->next;
            temp -> next = NULL;
            printf("The deleted node data is %d",del->data);
            free(del);
        }
else
{
printf("Enter you position of deletion");
scanf("%d",&pos);
while(pos-2>0)
{
t1=t1->next;
pos--;
}
del=t1->next;
t2=del->next;
printf("%d",del->data);
free(del);
t1->next=t2;
}
}
}

void insertion_node()
{
int ch,pos;
struct node *p;
struct node *n;
struct node *t1,*t2;
p=(struct node*)malloc(sizeof(struct node));
printf("Enter the data you want to insert");
scanf("%d",&p->data);
p->next=NULL;
n=p;
temp=first;
while(temp->next->next!=NULL)
{
temp=temp->next;
}
last=temp->next;
last->next=NULL;
if(first==NULL)
{
first=n;
last=n;
}
else
{
printf("Enter your choice of insertion");
scanf("%d",&ch);
if(ch==1)
{
n->next=first;
first=n;
}
else if (ch==2)
{
last->next=n;
last=n;
}
else
{
printf("Enter the required position for node insertion");
scanf("%d",&pos);
t1=first;
while(pos-2>0)
{
t1=t1->next;
pos--;
}
t2=t1->next;
t1->next=n;
n->next=t2;

}
printf("\nData after insertion");
display_node();

}
}
int search_node()
{
int key,p=0;
struct node *t;
printf("Enter the element you want to search");
scanf("%d",&key);
t=first;
while(t!=NULL)
{
if(t->data==key)
return p+1;
t=t->next;
p++;
    }

return -1;
}
int main()
{
int i,c,p;
for(i=0;i<5;i++)
{
create_node();
}
while(1)
{
printf("\nEnter your choice");
printf("\n 1 for Inserting node \n 2 for Deletion of node \n 3 for Display \n 4 for Searching node\n 5 for EXIT");
scanf("%d",&c);
switch(c)
{
case 1:insertion_node();
break;
case 2:delete_node();
break;
case 3:display_node();
break;
case 4:p=search_node();
if(p>0)
printf("Element found at position %d",p);
else
printf("Element not found");
break;
   case 5:exit(0);
default:printf("Enter between 1 to 4");
}
}

return 0;
}   

