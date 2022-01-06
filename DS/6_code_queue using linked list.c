/******************************************************************************

Implement Queue using Linked list

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
} *front = NULL, *rear = NULL;

void insert (int x)
{
  struct node *newnode;
  newnode = (struct node *) malloc (sizeof (struct node));
  newnode->data = x;
  newnode->next = NULL;
  if (front == NULL && rear == NULL)
    {
      front = rear = newnode;
    }
  else
    {
      rear->next = newnode;
      rear = newnode;
    }
}


void display ()
{
  struct node *temp;
  temp = front;
  if (front == NULL && rear == NULL)
    {
      printf ("\nQueue is empty\n");
    }
  else
    {
      while (temp != NULL)
	{
	  printf ("%4d", temp->data);
	  temp = temp->next;
	}
    }
}

void delete ()
{
  struct node *temp;
  temp = front;
  if (front == NULL && rear == NULL)
    {
      printf ("\nQueue underflow!!!\n");
    }
  else
    {
      printf ("%d\n ", front->data);
      front = front->next;
      free (temp);
    }
}

int main ()
{
  int ch, d;
  while (1)
    {
      printf ("Enter choice : 1. PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
      scanf ("%d", &ch);
      switch (ch)
	    {
	    case 1:
	    printf ("Enter data");
	    scanf ("%d", &d);
	    insert (d);
	    break;
	    case 2:
	    delete ();
	    break;
	    case 3:
	    display ();
	    break;
	    case 4:
	    exit (0);
	    default:
	    printf ("Enter between 1 to 4 ");
	    }
    }
  return 0;
}

