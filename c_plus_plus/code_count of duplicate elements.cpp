/******************************************************************************
Write a program in C to count a total number of duplicate elements in an array. 
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array : 4	6	1	8	1
Expected Output :
Total number of duplicate elements found in the array is : 1 

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
	int A[20],n,i,j,count=0;
	cout<<"Enter n : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
 	for(i=0;i<n;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
	 		if(A[i]==A[j])
	 		{
	 			count+=1;
			}
		 }
	 }	
	 cout<<"\nTotal number of duplicate elements found in the array is "<<count;
	 return 0;	
}


