/******************************************************************************
6.Program on Exception objects
*******************************************************************************/
#include <iostream>
using namespace std;
class divide_by_zero
{
    public:
        void getmessage()
        {
            cout<<"Divide by zero error"<<endl;
        }
};
int main()
{
   int a,b;
   cout<<"Enter values of a and b ";
   cin>>a>>b;
   try
   {
       if(b==0)
       {
           throw new divide_by_zero();
       }
       else
       {
          cout<<"a/b = "<<(a/b)<<endl;
       }
   }
   catch(divide_by_zero *obj)
   {
       obj->getmessage();
   }

    return 0;
}

