/******************************************************************************
        linear search using non recursion

*******************************************************************************/
#include<stdio.h>
int search(int A[],int n,int key)
{
        int i;
        for(i=0;i<n;i++)
        {
                if(A[i]==key)
                        return i+1;
        }
        return -1;
}
int main()
{
        int i,A[20],n,key,pos;
        printf("Enter n:");
        scanf("%d",&n);
        printf("Enter array elements");
        for(i=0;i<n;i++)
        {
                scanf("%d",&A[i]);
        }
        printf("Enter key");
        scanf("%d",&key);
        pos=search(A,n,key);
        if(pos!=-1)
                printf("Element found at %d position",pos);
        else
                printf("Element not found");
        return 0;
}



