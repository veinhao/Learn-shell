//纯虚函数的作用是为其派生类保留一个函数名字，以便派生类根据需要进行定义
#include <iostream>

using namespace std;

class Sharp{
	public:
	virtual double area()=0;//纯虚函数 
	virtual double volumn()=0; //纯虚函数 
}; 
class Circle:public Sharp{
	private:
	double r;
	public:
	Circle (double r1) :r(r1) {	}
	virtual double area() {return 3.14*r*r;}
	virtual double volumn() {return 0;}
};
class Cylinder:public Circle{
	private:
		double h;
	public:
		Cylinder(double r1,double h1):Circle(r1),h(h1) { }
		virtual double volumn() {return area()*h;}	
};
int main()
{
	Circle a(10.0);
	Cylinder b(8.0,9.0);
	Sharp *pb=&b;
	cout<<a.area()<<","<<b.volumn()<<endl;//静态联编 
	cout<<pb->area()<<","<<pb->volumn()<<endl;//动态联编
	return 0; 
}
