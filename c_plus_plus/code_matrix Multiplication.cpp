/*Multiplication of Two Matrices*/
#include<iostream>
using namespace std;
int main()
{
	int A[50][50], B[50][50],C[50][50] , i,j,k,sum=0,m,n,p,q;
	cout<<"Enter number of rows,Number of columns of first matrix:\n";
	cin>>m>>n;
	cout<<"Enter elements in rows and columns\n";
	
	//Reading elements in 1st matrix
	for(i=0;i<m;i++)
	{
    	for(j=0;j<n;j++)
    	{
    		cin>>A[i][j];
		}
    }	
    cout<<"Enter number of rows,Number of columns of second matrix: \n";
	cin>>p>>q;
	//Reading elements in 2nd matrix
	cout<<"Enter elements in rows and columns\n";
    for(i=0;i<p;i++)
	{
    	for(j=0;j<q;j++)
    	{
    		cin>>B[i][j];
		}
    }
	//printing 1st matrix
	cout<<"\nThe first matrix is : \n";
     for(i=0;i<m;i++)
	{
    	    for(j=0;j<n;j++)
    	    {
    		    cout<<A[i][j]<<" ";
		    }
		cout<<"\n";
    } 
	//printing 2nd matrix
	cout<<"\nThe second matrix is : \n";
	for(i=0;i<p;i++)
	{
    	    for(j=0;j<q;j++)
    	    {
    		    cout<<B[i][j]<<" ";
		    }
		cout<<"\n";
    }    
    
    	if(n!=p)
	{
    cout<<"Not possible to multiply the given matrices\n";
    
    }
    else
    {
    	for(i=0;i<m;i++)
    	{
    	    for(j=0;j<q;j++)
    	    {    
    	        sum=0;
    	    	for(k=0;k<m;k++)
    	    	{
				sum = sum + (A[i][k]*B[k][j]);
		        }
		        C[i][j]=sum;
            }    
    	}

    cout<<"\nThe multiplication is :\n";
    for(i=0;i<m;i++)
	    {
    	    for(j=0;j<q;j++)
    	    {    
    	        cout<<C[i][j]<<" ";
            }
         cout<<"\n";   
	    }
    }
}
