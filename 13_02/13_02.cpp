#include <iostream>
#include <deque>
using namespace std;
void main()
{
	deque<int> d1(10,80);   
	deque<int> d2(20,100);   
	cout<<"����ǰ:"<<endl;
    cout<<"d1�Ĵ�С:"<<d1.size()<<endl;
	cout<<"d2�Ĵ�С:"<<d2.size()<<endl;
	d2=d1;
	cout<<"���ƺ�:"<<endl;
	cout<<"d1�Ĵ�С:"<<d1.size()<<endl;
	cout<<"d2�Ĵ�С:"<<d2.size()<<endl;
}