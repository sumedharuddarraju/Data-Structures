/******************************************************************************
                     Relational operators
             
*******************************************************************************/


#include<iostream>
using namespace std;
int main()
{
	int a,b;
	bool b1,b2,b3,b4,b5,b6;
	cout<<"Enter 2 numbers";
	cin>>a>>b;
	b1=a>b;
	b2=a>=b;
	b3=a<b;
	b4=a<=b;
	b5=a==b;
	b6=a!=b;
       
    	cout<<" a>b = "<<b1<<endl;
        cout<<" a>=b = "<<b2<<endl;
        cout<<" a<b = "<<b3<<endl;
        cout<<" a<=b = "<<b4<<endl;
        cout<<" a==b = "<<b5<<endl;
        cout<<" a!=b = "<<b6<<endl;
        return 0;
}


