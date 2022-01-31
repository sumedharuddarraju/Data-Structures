/******************************************************************************

Virtual base class

*******************************************************************************/
#include <iostream>
using namespace std;

class Base
{
    public:
        int a;
        virtual void show()
        {
            cout<<"Base"<<endl;
        }
};
class derived1:public virtual Base
{
    public:
        int b;
        void show()
        {
            cout<<"Derived 1 class"<<endl;
        }
};
class derived2:public virtual Base
{
    public:
        int c;
        void show()
        {
            cout<<"Derived 2 class"<<endl;
        }
};

class derived3:public derived1,public derived2
{
    public:
    int d;
    derived3()
    {
        a=1;
        b=2;
        c=3;
        d=4;
    }
    void show()
    {
        cout<<"a = "<<a<<"  b = "<<b<<" c = "<<c<<"  d = "<<d<<endl;
        cout<<"Sum is "<<a+b+c+d;
    }
};
int main()
{
    Base *bptr=new derived1;
    Base *ptr=new derived2;
    derived3 d3;
    bptr->show();
    ptr->show();
    d3.show();
    return 0;
}



