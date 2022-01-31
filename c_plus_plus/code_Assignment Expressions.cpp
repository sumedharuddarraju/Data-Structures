/******************************************************************************
Special Assignment Expressions
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
int a,b,c,d; // variables declaration
a=b=80; // chained assignment
cout <<"Values of 'a' and 'b' are : " <<a<<","<<b<< endl;
c=10+(d=90); // embedded assignment expression
cout <<"Value of 'c' is " <<c<< endl;
d+=10; // compound assignment
cout << "Value of d is :" <<d<< endl; 
return 0;
}
