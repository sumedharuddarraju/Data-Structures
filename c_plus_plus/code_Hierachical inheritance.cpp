/******************************************************************************

Hierachical inheritance.

*******************************************************************************/
#include <iostream>
using namespace std;

class A
{
  public:
    int a, b;
    A()
    {
        a = 2;
        b = 3;
    }
};

class B : public A
{
   public:
        void sum()
        {
            cout<<"a + b = "<<a+b<<endl;
        }
};

class C : public A
{
   public:
        void product()
        {
            cout<<"a * b = "<<a*b<<endl;
        }
};
int main()
{
    B b;
    C c;
    b.sum();
    c.product();
    return 0;
}

