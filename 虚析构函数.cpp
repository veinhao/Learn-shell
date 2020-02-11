//派生类的对象从内存中撤销delete()时，一般先调用类的析构函数，然后再调动基类的析构函数
//如果用new运算符建立了一个派生类对象，且定义了一个基类的指针指向这个对象，当delete撤销对象时，系统只会撤销基类的析构函数
//而不撤销派生类的对象，从而无法真正地删除
#include <iostream>

using namespace std;

class Base{
	public:
	Base(){ }
	virtual ~Base(){ }
	virtual void fun(){
	cout<<"In class Base"<<endl;
	}
}; 
class Derived:public Base{
	public:
	Derived(){	};
	~Derived(){
		cout<<"destructor of Derived"<<endl;
	}
	void fun(){
		cout<<"In class Derived"<<endl;
	}//虚函数 
};
int main(){
	Base *pTest=new Derived;
	pTest->fun();
	delete pTest;
	return 0;
 } 
