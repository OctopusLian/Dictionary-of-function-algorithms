#include <iostream>
#include <deque>
using namespace std;
void main()
{
	deque<char> d;
	deque<char>::iterator p;
	for(int i=0;i<5;i++)
		d.push_back(i+'A');
	cout<<"�����е�Ԫ�ظ�����:"<<d.size()<<endl;
	cout<<"�����е�Ԫ��:"<<endl;
	for(p=d.begin();p!=d.end();p++)
		cout<<" "<<*p;
	cout<<endl;
}
