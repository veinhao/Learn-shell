#include <iostream>

using namespace std;
class Base{
	public:
	virtual void print() { cout<<"Base"<<endl;}//Ðéº¯Êý 
}; 
class Derived:public Base{
	public: void print() {cout<<"Derived"<<endl;}//Ðéº¯Êý 
};
void display(Base *p,void(Base::*pf)()){
	(p->*pf)();
}
int main(){
	Derived d;
	Base b;
	display(&d,&Base::print);
	display(&b,&Base::print);
	return 0;
}
