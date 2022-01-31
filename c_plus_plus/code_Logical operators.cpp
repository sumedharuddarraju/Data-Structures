/******************************************************************************
                 Logical operators
*******************************************************************************/


#include<iostream>
using namespace std;
int main()
{
	int a , b ,c;
	cout<<"Enter 3 numbers";
	cin>>a>>b>>c;
	cout<<"(a>b)&&(b<c) = " <<((a>b)&&(b<c))<<endl;
	cout<<"(a>b)||(b<c) = "<<((a>b)||(b<c))<<endl;
	cout<<"!(a>b) = "<<(!(a>b))<<endl;   

}


