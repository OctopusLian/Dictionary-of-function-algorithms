#include <iostream>
#include <deque>
using namespace std;
void DispDeque(deque<int> d)
{
	cout<<"�����е�Ԫ��:"<<endl;
	deque<int>::iterator it;
	for(it=d.begin();it!=d.end();it++)
		cout<<*it<<" ";
	cout<<endl;
}
void main ()
{
	deque<int> d;
	int i;
	for(i=0;i<5;i++) 
		d.push_front(i*10);
	DispDeque(d);
	d.resize(3);//�������еĴ�С��С��3
	DispDeque(d);
	d.resize(6,50);//�������Ĵ�С��չ��6
	DispDeque(d);
	d.resize(15);//�������Ĵ�С��չ��15����չ��Ԫ����0
	DispDeque(d);
}
