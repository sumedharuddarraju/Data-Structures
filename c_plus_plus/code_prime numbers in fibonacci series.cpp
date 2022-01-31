/******************************************************************************
Program to print all prime numbers between 1 to n, only if it is part of the Fibonacci series. 
For example: n value is 10, 1 to 10 prime numbers are : 2, 3, 5, 7.
 Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21.. output is: 2,3,5
Sample Input 1:
20
Sample Output 1:
2, 3, 5,13 
*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c,i,f=0,n;
	cout<<"enter the limit"<<endl;
	cin>>n;
	while(b<=n)
	{
		c=b;
		b=a+b;
		for(i=1;i<=b;i++)
		{
			if(b%i==0)
			f+=1;
			else
			f+=0;
		}
		if (f==2)
		cout<<b<<" ";
		f=0;
		
		a=c;
	}
}

