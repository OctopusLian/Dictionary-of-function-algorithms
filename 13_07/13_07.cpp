#include <iostream>
#include <deque>
using namespace std;
void DispDeque(deque<int> d)
{
	cout<<"容器中的元素:"<<endl;
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
	d.resize(3);//将容器中的大小缩小到3
	DispDeque(d);
	d.resize(6,50);//将容器的大小扩展到6
	DispDeque(d);
	d.resize(15);//将容器的大小扩展到15，扩展的元素是0
	DispDeque(d);
}
