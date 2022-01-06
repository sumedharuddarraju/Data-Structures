//Linear search using recursion

#include<stdio.h>
int LinearSearch(int A[],int n,int i, int key)
{
        if(i>=n)
                return -1;
        else
        {
                if(key==A[i])
                        return i+1;
                else
                        LinearSearch(A,n,i+1,key);
        }
}
int main()
{
        int A[10],i,n,pos,key;
        printf("Enter n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        printf("Enter key");
        scanf("%d",&key);
        pos=LinearSearch(A,n,0,key);
        if(pos>0)
                printf("Element found at %d",pos);
        else
                printf("Element not found");
        return 0;
}

