/******************************************************************************

7. Write a C++ program using this pointer.
*******************************************************************************/
#include <iostream>
using namespace std;
class Demo
{
private:
int num;
char ch;
public:
void setMyValues(int num, char ch)
{
this->num =num;
this->ch=ch;
}
void displayMyValues()
{
cout<<"num = "<<num<<endl;
cout<<"ch = "<<ch;
}
};
int main()
{
Demo obj;
obj.setMyValues(100, 'A');
obj.displayMyValues();
return 0;
}
