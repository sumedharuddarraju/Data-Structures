/******************************************************************************

Early binding
*******************************************************************************/
#include <iostream>
using namespace std;
class Base
{
    public:
        void show()
        {
            cout<<"Early binding in Base class"<<endl;
        }
};
class Derived:public Base
{
    public:
        void show()
        {
            cout<<"In derived class "<<endl;
        }
};

int main()
{
    Base *bp=new Derived;
    bp->show();
    return 0;
}




