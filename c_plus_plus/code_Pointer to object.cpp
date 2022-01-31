/******************************************************************************

Pointer to object

*******************************************************************************/
#include<iostream>
using namespace std;
class sample
{
    public:
    int a =20,b=20;
    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b;
    }
};
int main()
{
    sample *obj=new sample; 
    obj->display(); 
    return 0;
}


