// Addition of matrices 
#include<iostream>
using namespace std;
int main()
{
	int A[10][10],i,r1,j,c1,B[10][10],r2,c2,C[10][10];
	cout<<"Enter number of rows,Number of columns of first matrix:\n";
	cin>>r1>>c1;
	cout<<"Enter elements in rows and columns\n";
	for(i=0;i<r1;i++)
	{
    	for(j=0;j<c1;j++)
    	{
    		
    		cin>>A[i][j];
		}
    }	
    cout<<"Enter number of rows,Number of columns of second matrix: \n";
	cin>>r2>>c2;
	cout<<"Enter elements in rows and columns\n";
    for(i=0;i<r2;i++)
	{
    	for(j=0;j<c2;j++)
    	{
    		
    		cin>>B[i][j];
		}
    }
	if(r1==r2 && c1==c2)
	{
		cout<<"The addition of the given 2 matrices is:\n";
		for(i=0;i<r1;i++)
	{
    	for(j=0;j<c1;j++)
    	{
    		C[i][j]=A[i][j]+B[i][j];
    	    cout<<C[i][j]<<" ";
		}
		cout<<"\n";
    }
}   
    else
    cout<<"Not possible to add the given matrices";
}

