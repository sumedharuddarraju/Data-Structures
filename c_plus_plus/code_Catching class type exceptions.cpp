/******************************************************************************

7. Program on Catching class type exceptions.

*******************************************************************************/

#include <iostream>
#include<cstring>
//#include<string.h>
using namespace std;
class MyException
{
  public: 
  char str[80];
  int num;
  MyException()
  {
      *str=0;
      num=0;
  }
  MyException(char *s,int n)
  {
      strcpy(str,s);
      num=n;
  }
};
int main()
{
    int i;
    try
    {
        cout<<"Enter a positive number:";
        cin>>i;
        if(i<0)
        {
            throw MyException("Not Positive",i);
        }
    }
    catch(MyException e)
    {
        cout<<e.str<<":";
        cout<<e.num<<"\n";
    }

    return 0;
}
