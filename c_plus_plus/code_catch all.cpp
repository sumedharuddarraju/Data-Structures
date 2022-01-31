/******************************************************************************

3. Program handles divide by zero exception with catch all

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a and b values : ";
    cin>>a>>b ;
    try
    {
        if(b==0)
        {
            throw b;
        }
        else if(b < 0)
        {
            throw "b cannot be negative";
        }
        else
        {
            cout<<"Result of a/b="<<a/(float)b<<endl;
        }
    }
    catch(int b)
    {
        cout<<"b cannot be zero";
    }
    catch(...)
    {
        cout<<"Unknown exception in program";
    }
    return 0;
}






