#include <iostream>

using namespace std;
///����ͼ��change�ı�ָ��p��ָ���ֵ����Ĭ�ϣ� 
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
