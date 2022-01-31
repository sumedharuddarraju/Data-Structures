/******************************************************************************
 Write C++ program to declare the class employee containing data members--Emp_no,
 Emp_name,basic,DA,income_tax,net_salary and print data members
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
	emp.EmpNo = 1279;
	emp.Emp_name="sumedha";
	emp.basic=500000;
	emp.DA=2000;
	emp.income_tax=10000;
	emp.print();
	return 0;
}

