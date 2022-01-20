/******************************************************************************

Implement Bubble sort using functions

*******************************************************************************/


#include<stdio.h>
#define max 100

void BubbleSort(int A[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
}

void printArray(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%4d",A[i]);
    }
}

int main()
{
    int A[max],i,j,n,temp;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Before sorting array elements are ");
    printArray(A,n);
   
    BubbleSort(A,n);                                //Calling BubbleSort function
   
    printf("\n\nAfter sorting elements are ");
    printArray(A,n);
    
    return 0;
}

