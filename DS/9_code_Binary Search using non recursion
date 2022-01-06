//      Binary Search using non recursion 

#include<stdio.h>
int BinarySearch(int A[],int n,int key)
{
        int l,r,mid;
        l=0;
        r=n-1;
        while(l<=r)
        {
                mid=(l+r)/2;
                if(key == A[mid])
                        return mid + 1;
                else if(key<A[mid])
                        r=mid-1;
                else
                        l=mid+1;
        }
        return -1;
}

int main()
{
        int i,A[10],n,key,pos;
        printf("Enter n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
                scanf("%d",&A[i]);
        printf("Enter key");
        scanf("%d",&key);
        pos=BinarySearch(A,n,key);
        if(pos>0)
                printf("Element found at %d position",pos);
        else
                printf("Element not found");
        return 0;
}

