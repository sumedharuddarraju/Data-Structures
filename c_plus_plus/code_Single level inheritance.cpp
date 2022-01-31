/******************************************************************************

           Single level inheritance

*******************************************************************************/
#include<iostream>
using namespace std;

class base
{
    public:
    int x=10;
};
class derived:public base
{
    int y;
    public:
    
    void f1()
    {
        y=x*10;
        
        cout<<"y = "<<y<<endl;
    }
};
int main()
{
    derived obj;
    obj.f1();
    cout<<"x = "<<obj.x<<endl;
    return 0;
}


