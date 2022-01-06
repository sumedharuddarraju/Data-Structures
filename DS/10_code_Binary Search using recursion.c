//      Binary Search using recursion 
#include<stdio.h>
int BinarySearch(int A[],int key,int l,int r)
{
        int mid;
        if(l<=r)
        {
                mid=(l+r)/2;
                 if(key == A[mid])
                         return mid+1;
                else if(key<A[mid])
                          BinarySearch(A,key,l,mid-1);
                else
                        BinarySearch(A,key,mid+1,r);
        }
        else
        return -1;
}

int main()
{
        int i,A[10],n,key,pos,l,r;
        printf("Enter n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
                scanf("%d",&A[i]);
        printf("Enter key");
        scanf("%d",&key);
        //l=0;
        //r=n-1;
        pos=BinarySearch(A,key,0,n-1);
        if(pos>0)
                printf("Element found at %d position",pos);
        else
                printf("Element not found");
        return 0;
}

