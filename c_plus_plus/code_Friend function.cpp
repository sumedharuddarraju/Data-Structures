//Friend function
#include <iostream>
using namespace std;
class Distance
{
	private:
	int meter;	
	public: 
	Distance()
	{
		meter =0;
	}	

	void show()
	{
		cout<<"Class member function"<<endl;
	}
	void show1();
	friend int add(Distance);
};
void Distance::show1()
{
	cout<<"Class member function-1"<<endl;
}
int add(Distance d)
{
	d.meter+=5;
	return d.meter;
}
int main()
{
	Distance D;
	D.show();
	D.show1();
	cout<<"Friend function: "<<add(D)<<endl;
	return 0;
}


