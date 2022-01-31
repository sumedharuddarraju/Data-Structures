/******************************************************************************

                        Bitwise operators

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
	int a , b;
	cout<<"Enter any 2 numbers:\n";
	cin>>a>>b;
	cout<<"a & b is "<<(a&b);
	cout<<"\n a | b is "<<(a|b);
	cout<<"\n a ^ b is "<<(a^b);
	cout<<"\n The value of a after left shift  is "<<(a<<1);
	cout<<"\n The value of a after right shift is "<<(a>>2);
	cout<<"\n~a is "<<(~a);
	return 0;
}


