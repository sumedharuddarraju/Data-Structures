/******************************************************************************

    5. C++ program to demonstrate Stack Unwinding

*******************************************************************************/
#include <iostream>
using namespace std;
  
void f1() //throw(int)
{
    cout << "f1() Start"<<endl;
    throw 77;
    cout << "f1() End"<<endl;
}

void f2() //throw(int)
{
    cout <<"f2() Start"<<endl;
    f1();
    cout << "f2() End "<<endl;
}

void f3()
{
    cout <<"f3() Start"<<endl;
    try 
    {
           f2();
    }
    catch (int i) 
    {
        cout << "Caught Exception: " << i<<endl;
    }
    cout<<"f3() End"<<endl;
}
  

int main()
{
    f3();
    return 0;
}



