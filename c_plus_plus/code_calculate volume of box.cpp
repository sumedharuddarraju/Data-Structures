/******************************************************************************
            Program to calculate volume of a box using classes
*******************************************************************************/
#include<iostream>
using namespace std;
class Box
{
	public:
		double length;
		double breadth;
		double height;
		double volume(double h,double l,double b)
		{
			double vol;
			vol= h*l*b;
			return vol; 
		}
};
int main()
{
Box box1;
Box box2;
double box1_volume=0.0 ,box2_volume=0.0;
box1_volume=box1.volume(5,6,7);
cout<<"Volume of Box1: "<<box1_volume<<endl;
box2_volume=box2.volume(10,12,13);
cout<<"Volume of Box2 : "<<box2_volume<<endl;
return 0;
}

