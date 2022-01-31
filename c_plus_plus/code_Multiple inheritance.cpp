/******************************************************************************

Multiple inheritance

*******************************************************************************/
#include<iostream>
using namespace std;
class Base1
{
    public:
    Base1()
    {
        cout<<"BASE CLASS 1"<<endl;
    }
};
class Base2
{
    public:
    Base2()
    {
        cout<<"BASE CLASS 2"<<endl;
    }
};
class derived:public Base1,public Base2
{
};
int main()
{
    derived obj;
    return 0;
}

