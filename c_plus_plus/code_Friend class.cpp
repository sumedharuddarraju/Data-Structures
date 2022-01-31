//Friend class
#include<iostream>
using namespace std;
class A
{
	private:
		int a1;
	public:
		A()
		{
			a1=10;
		}
	friend class B;
};
class B
{
	private:
		int b1;
	public:
		B()
		{
			b1=100;
		}
		void showA(A &x)
		{
			cout<<"A::a="<<x.a1<<endl;
		}
		friend class C;
};
class C
{
	private:
		int c1;
	public:
	       	C()
		{
			c1=100;
		}
		void showB(B &y)
		{
			cout<<"B::b="<<y.b1;
		}
};
int main()
{
	A a;
	B b;
	C c;
	b.showA(a);
	c.showB(b);
}


