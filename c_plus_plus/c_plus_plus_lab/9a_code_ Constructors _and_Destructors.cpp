/******************************************************************************

9. Program to demonstrate Constructors &  Destructors

*******************************************************************************/
#include<iostream>
using namespace std;
class Point
{
        private:
                int x,y;
        public:

                Point()
                {
                        cout<<endl<<"Welcome to default constructor"<<endl; //default constructor
                }
                Point(int x1,int y1)       //parameterized constructor 
                {
                        x=x1;
                        y=y1;
                }
                Point(const Point &p2)    //copy constructor
                {
                        x=p2.x;
                        y=p2.y;
                }
                int getX()
                {
                        return x;
                }
                int getY()
                {
                        return y;
                }
                ~Point()
                {
                        cout<<endl<<"Destructor is called"<<endl;
                }
                
};
int main()
{
        Point p;
        Point p1(10,15);
        Point p2=p1;
        cout<<"p1.x="<<p1.getX()<<","<<"p1.y = "<<p1.getY()<<endl;
        cout<<"p2.x="<<p2.getX()<<","<<"p2.y = "<<p2.getY()<<endl;
        return 0;
}





