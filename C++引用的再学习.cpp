#include <iostream>

using namespace std;
///我试图用change改变指针p所指向的值（其默认） 
void change(int* x)
{
	x=new int;
	*x=6;
}

void change1(int * & x)
{
	x=new int;
	*x=6;
 } 
int main()
{
	int *p;
	p=new int;
	*p=5;
	change(p);
	cout<<*p<<endl;
	change1(p);
	cout<<*p<<endl;
	return 0;
 } 
