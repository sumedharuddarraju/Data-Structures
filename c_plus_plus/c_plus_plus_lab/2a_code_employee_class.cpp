/******************************************************************************

4. Given that an EMPLOYEE class contains following members: data members: Employee number,
Employee name,Basic, DA, IT, Net Salary and print data members
*******************************************************************************/
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	public:
	int EmpNo;
	string Emp_name;
	float basic;
	float DA;
	float income_tax;
	float net_salary;
	void print()
	{
		net_salary=basic+DA-income_tax;
		cout<<"Emp number is "<<EmpNo<<endl;
		cout<<"Emp name is "<<Emp_name<<endl;
		cout<<"Basic salary is "<<basic<<endl;
		cout<<"DA is "<<DA<<endl;
		cout<<"Income tax is "<<income_tax<<endl;
		cout<<"net_salary is "<<net_salary<<endl;
	}
};
int main()
{
	Employee emp;
	
	cout<<"Enter employee number"<<endl;
	cin>>emp.EmpNo;
	cout<<endl;
	
	cout<<"Enter employee name"<<endl;
	cin>>emp.Emp_name;
	cout<<endl;
	
	cout<<"Enter employee basic salary"<<endl;
	cin>>emp.basic;
	cout<<endl;
	cout<<"Enter DA "<<endl;
	cin>>emp.DA;
	cout<<endl;
	
	
	cout<<"Enter income tax "<<endl;
	cin>>emp.income_tax;
	cout<<endl;

	emp.print();
	
	return 0;
}




