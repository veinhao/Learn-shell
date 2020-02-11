//虚函数就是以共同的方法对不同的对象采取不同的策略 
#include <iostream>

using namespace std;

class Point
{
	private:
	double x,y;
	public:
	Point(double x1=0,double y1=0): x(x1),y(y1) { }
	virtual double area() { return 0;}//点没有面积，所以为零	
}; 
class Circle:public Point
{
	double r;
	public:
	Circle(double x,double y,double r1):Point(x,y),r(r1) { }
	virtual double area() {return 3.14*r*r;}
}; 
int main()
{
	Point a(3,4);
	Circle b(5,6,7);
	Point* pc=&b; 
	cout<<"Circle area="<<pc->area()<<endl;//动态联编
	cout<<"Circle area="<<pc->Point::area()<<endl;//静态联编 
	return 0;
}
