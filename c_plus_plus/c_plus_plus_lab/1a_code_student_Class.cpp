/******************************************************************************

1. Write a C++ Program to display Names, Roll No., and grades of 3 students who have appeared in the examination.
 Declare the class of name, Roll No. and grade. 
Create an array of class objects. Read and display the contents of the array.
*******************************************************************************/
#include<iostream>
using namespace std;
class student
{
    public:
	int roll_no;
	string name;
	char grade;
};
int main()
{
	int i;
	student s[3];
	for(i=0;i<3;i++)
{
	cout<<"Enter the information of student "<<i+1<<endl;
	cout<<"name : ";
	cin>>s[i].name;
	cout<<"roll_no : ";  
	cin>>s[i].roll_no;
	cout<<"Grade :";
	cin>>s[i].grade;
	cout<<endl;
}
cout<<"The information of 3 students is as follows : ";
cout<<endl<<"...................................................."<<endl;	

for(i=0;i<3;i++)
{
	cout<<"Student : "<<i+1<<endl;
	cout<<"roll no : "<<s[i].roll_no<<endl;
	cout<<"name : "<<s[i].name<<endl;
	cout<<"grade : "<<s[i].grade<<endl;
	cout<<"\n";
}
return 0;	
}


