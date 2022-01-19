/******************************************************************************
11.Write a C++ program to create multilevel inheritance.
*******************************************************************************/
#include<iostream>
using namespace std;
class a
{
    private:
    int x;
    public:
        void f(int n)
        {
            x=n*5;
            cout<<"x = "<<x<<endl;
        }
};
class b : public a
{
    int x1;
    public:
        void f1(int n1)
        {
            x1=n1*5;
            cout<<"x1 = "<<x1<<endl;
        }
};
class c:public b
{
    int x2;
    public:
        void f2(int n2)
        {
            x2=n2*5;
            cout<<"x2 = "<<x2<<endl;
        }
};
int main()
{
    c obj;
    obj.f(5);
    obj.f1(5);
    obj.f2(5);
    return 0;
}

