/******************************************************************************

4. Write a C++ program to declare Struct. Initialize and display contents of member Variables.

*******************************************************************************/
#include<iostream>
using namespace std;
struct student
{
	int roll_no;
	string name;
	long int ph_no;
};
int main()
{
	int i;
	struct student s[3];
	s[0].roll_no=1;
	s[0].name="Raju";
	s[0].ph_no=123443;
	s[1].roll_no=2;
	s[1].name="Ramu";
	s[1].ph_no=123456;
	s[2].roll_no=3;
	s[2].name="Siva";
	s[2].ph_no=123455;

for(i=0;i<3;i++)
{
	cout<<"Student "<<i+1<< " details"<<endl;
	cout<<"roll no  :"<<s[i].roll_no<<endl;
	cout<<"name  :"<<s[i].name<<endl;
	cout<<"phone number :"<<s[i].ph_no<<endl;
	cout<<"\n";
}
	return 0;
}

