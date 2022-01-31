/******************************************************************************

4.Program on Rethrowing an exception

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    try
    {
        try
        {
            throw 7;
        }
        catch(int n)
        {
            cout<<"Handle partially"<<endl;
            throw;
        }
    }
    catch(int n)
    {
        cout<<"Handle remaining";
    }

    return 0;
}



