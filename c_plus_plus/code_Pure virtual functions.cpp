/******************************************************************************

Pure virtual functions
*******************************************************************************/
#include <iostream>
using namespace std;
class base
{
    public: 
        virtual void show()=0;
};
class derived1 : public base
{
    public:
        void show()
        {
            cout<<"derived1 class"<<endl;
        } 
};
class derived2 : public base
{
    public:
        void show()
        {
            cout<<"derived2 class"<<endl;
        } 
};
int main()
{
    base *bptr=new derived1;
    base *ptr=new derived2;
    bptr->show();
    ptr->show();
    return 0;
}



