//Write a program that uses functions to perform the following operations on doubly linked list.: i) Creation ii) Insertion iii) Deletion iv) Traversal

#include <stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *Prev, *next;
} *first = NULL, *temp, *t1, *t2 ,*last;
void Insertion ();
void Deletion ();
void Display ();
int main ()
{
  int ch;
  while (1)
    {
      printf ("Enter your choice ");
      scanf ("%d", &ch);
      switch (ch)
	{
	case 1: Insertion ();
	  break;
	case 2: Deletion ();
	  break;
	case 3: Display ();
	  break;
	case 4: exit (0);
	default: printf ("Enter value from 1 to 4");
	}
    }
  return 0;
}

void Insertion ()
{
  int pos, k;
  struct node *P;
  P = (struct node *) malloc (sizeof (struct node));
  printf ("Enter your data");
  scanf ("%d", &P->data);
  P->Prev = NULL;
  P->next = NULL;
  if (first == NULL)
    {
      first = P;
      last = P;
    }
  else
    {
      printf("Enter your position of insertion 1. Beginning, 2.Last , 3. reqd node  ");
      scanf ("%d", &pos);
      if (pos == 1)
	    {
	     P->next = first;
	    first->Prev = P;
	    first = P;
	    }
      else if (pos == 2)
	   {
	   last->next = P;
	   P->Prev = last;
	  last = P;
	}
      else
	{
	  printf ("Enter your reqd position of insertion in b/w nodes ");
	  scanf ("%d", &k);
	  t1 = first;
	  while(k-2>0)
	  {
	      t1= t1->next;
	      k--;
	  }
	  t2=t1->next;
	  t1->next =P;
	  P->Prev = t1;
	  P->next = t2;
	  t2->Prev =P;
	}
  }
}
void Deletion()
{
struct node *t1,*t2,*del;
int pos,p;
if(first == NULL)
printf("deletion is not possible");
else if(first -> next == NULL){
printf("only one node is present");
del = first;
printf("%d",del->data);
free(del);
first = NULL;
}
else{
printf("enter your position of deletion:");
scanf("%d",&pos);
t1 = first;
if(pos == 1){
del = first;
first = first -> next;
first->Prev = NULL;
printf("%d",del->data);
free(del);
}
else if(pos==2)
{
        del=last;
        last=last->Prev;
        last->next = NULL;
        printf("%d is deleted \n",del->data);
        free(del);
}
else
{
        t1=first;
        printf("Enter the position of deletion ");
        scanf("%d",&p);

while(p-2 > 0){
t1 = t1 -> next;
p--;
}
 del = t1->next;
 t2 = del -> next;
 printf("%d is deleted ",del->data);
 free(del);
 t1->next = t2;
 t2->Prev = t1;
}
}
}

void Display()
{
    struct node *i;
    int j;
    printf("\nEnter your choice of display      1.Forward  2.Reverse ");
    scanf("%d",&j);
    if(j == 1)
    {
        for(i=first;i!=NULL;i=i->next)
        printf("%d ",i->data);
    }
    else
    {
        for(i=last;i!=NULL;i=i->Prev)
        printf("%d ",i->data);
    }
}

