#include <iostream>
#include <deque>
using namespace std;
void main()
{
	deque<int> d;
	cout<<"����d�Ĵ�С:"<<d.size()<<",";
	cout<<"�����ɵ����Ԫ�ظ���:"<<d.max_size()<<endl;
	for (int i=0;i<8;i++)
		d.push_front(i);
	cout<<"����d�Ĵ�С:"<<d.size()<<",";
	cout<<"����d�����ɵ����Ԫ�ظ���:"<<d.max_size()<<endl;
	d.insert(d.begin(),6,20);
	cout<<"����d�Ĵ�С:"<<d.size()<<",";
	cout<<"����d�����ɵ����Ԫ�ظ���:"<<d.max_size()<<endl;
	d.pop_back();
	cout <<"����d�Ĵ�С:"<<d.size()<<",";
	cout<<"����d�����ɵ����Ԫ�ظ���:"<<d.max_size()<<endl;
}
