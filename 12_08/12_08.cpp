#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<int> v;
	v.push_back(25);
	cout<<"���·���洢�ռ�ǰ:"<<endl;
	cout<<"�����Ĵ洢�ռ��С:"<<v.capacity()<<endl;
	cout<<"������ʵ��Ԫ�ظ���:"<<v.size()<<endl;
	cout<<"�����������ɵ�Ԫ�ظ���:"<<v.max_size()<<endl;
	v.reserve(100);
	cout<<"���·���洢�ռ��:"<<endl;
	cout<<"�����Ĵ洢�ռ��С:"<<v.capacity()<<endl;
	cout<<"������ʵ��Ԫ�ظ���:"<<v.size()<<endl;
	cout<<"�����������ɵ�Ԫ�ظ���:"<<v.max_size()<<endl;	
}