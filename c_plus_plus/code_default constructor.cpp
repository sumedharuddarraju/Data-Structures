/******************************************************************************
Program using default constructor

*******************************************************************************/
#include<iostream>
using namespace std;
class sample
{
	public:
		int a,b;
	sample()
	{
		a = 20;
		b = 30;
	cout<<"Welcome to constructors"<<endl;
	}
};
	int main()
	{
		sample s;
		cout<<"a = "<<s.a<<endl;
		cout<<"b = "<<s.b<<endl;
return 0;
	}


