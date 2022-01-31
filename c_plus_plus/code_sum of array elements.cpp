//Sum of array elements

#include<iostream>
using namespace std;
int main()
{
	int A[10],i,sum=0,n; 
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Enter array elements";
	 for(i=0;i<n;i++)
	   cin>>A[i];
	for(i=0;i<n;i++)
	{
	 sum +=A[i];
	}
cout<<"The sum of array elements is "<<sum;
return 1;
}



