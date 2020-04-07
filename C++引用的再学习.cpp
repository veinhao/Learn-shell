#include <iostream>

using namespace std;
///我试图用change改变指针p所指向的值（其默认为5）,但其失败的，因为指针参数无法改变指针指向的值
///其实我在在猜测这种可能，指针先开辟了一个动态内存，函数中也为指针开辟了动态内存来修改数字，但两块地址都是为P开辟的，所以P回到
///主函数时又回到了原来的地址 ，而并非函数中开辟的地址  
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
