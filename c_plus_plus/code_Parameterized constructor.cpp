/******************************************************************************

Parameterized constructor

*******************************************************************************/
#include<iostream>
using namespace std;
class parameter_constructor
{
    public:
    int x,y;
    parameter_constructor(int a , int b)
    {
        cout<<"Welcome to Parameterized constructor\n";
        x=a;
        y=b;
        cout<<"x = "<<x<<" , "<<"y = "<<y;
    }  
};
int main()
{
  parameter_constructor P1(10,15);
  cout<<"\nExplicit calling\n";
  parameter_constructor P2 = parameter_constructor(100,200);
    return 0;
}


