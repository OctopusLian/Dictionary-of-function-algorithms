#include <iostream>
#include <list>
using namespace std;
void main()
{
	list<int> L(5);
	cout<<"����L��ʵ�ʴ�С:"<<L.size()<<",";
	cout<<"�����ɵ����Ԫ�ظ���:"<<L.max_size()<<endl;
	for (int i=1;i<=5;i++)
		L.push_back(i);
	cout<<"����L��ʵ�ʴ�С:"<<L.size()<<",";
	cout<<"�����ɵ����Ԫ�ظ���:"<<L.max_size()<<endl;
	L.insert(L.begin(),5,20);
	cout<<"����L��ʵ�ʴ�С:"<<L.size()<<",";
	cout<<"�����ɵ����Ԫ�ظ���:"<<L.max_size()<<endl;
	L.pop_back();
	cout <<"����L��ʵ�ʴ�С:"<<L.size()<<",";
	cout<<"�����ɵ����Ԫ�ظ���:"<<L.max_size()<<endl;
}
