//������Ķ�����ڴ��г���delete()ʱ��һ���ȵ����������������Ȼ���ٵ����������������
//�����new�����������һ������������Ҷ�����һ�������ָ��ָ��������󣬵�delete��������ʱ��ϵͳֻ�᳷���������������
//��������������Ķ��󣬴Ӷ��޷�������ɾ��
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
	}//�麯�� 
};
int main(){
	Base *pTest=new Derived;
	pTest->fun();
	delete pTest;
	return 0;
 } 
