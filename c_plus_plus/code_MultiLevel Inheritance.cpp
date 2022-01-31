//MultiLevel Inheritance
#include <iostream>
using namespace std;

class A
{
    public:
    int x;
    
        A()
        {
            x=10;
        }
};
class B:public A
{
  public:
  int y;
    B()
        {
            y=20;
        }
    
};
class C:public B
{
    int z;
  public:
    void f()
    {
        z=x*y;
        cout<<"z = "<<z<<endl;
    }
};

int main()
{
   C obj;
    obj.f();
    return 0;
}


