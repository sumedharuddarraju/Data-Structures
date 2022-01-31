/******************************************************************************
       To calculate Sum,Subtraction,multiplication using classes

*******************************************************************************/
#include<iostream>
using namespace std;
class cal
{
	public:
	int a,b;
	int sum(int a,int b)
	{
		return a+b;
	}
	int subtract(int a ,int b)
	{
		return a-b;
	}
	int product(int a , int b)
	{
		return a * b;
	}
};
int main()
{	cal obj1;
	cout<<"Sum is "<<obj1.sum(20,10)<<endl;
	cout<<"Subtraction is "<<obj1.subtract(20,10)<<endl;
	cout<<"Product is "<<obj1.product(20,10)<<endl;
	return 0;
}

