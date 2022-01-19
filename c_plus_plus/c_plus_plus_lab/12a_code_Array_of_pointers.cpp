/******************************************************************************

Write a C++ program to create an array of pointers. Invoke functions using array objects

*******************************************************************************/
#include <iostream>
using namespace std;

class sample
{
    int x;
    public:
        void get_data()
        {
            cout<<"Enter a value : ";
            cin>>x;
        }
        void print_data()
        {
            cout<<"x = "<<x<<endl;
        }
};
int main()
{
    int i;
    sample s;
    sample *ptr= new sample[5];
    for(i=0;i<5;i++)
    {
        ptr->get_data();
        ptr->print_data();
    }
    return 0;
}

