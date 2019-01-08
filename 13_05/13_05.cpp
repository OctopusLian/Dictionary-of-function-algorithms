#include <iostream>
#include <deque>
using namespace std;
void main()
{
	deque<int> d;
	cout<<"容器d的大小:"<<d.size()<<",";
	cout<<"能容纳的最大元素个数:"<<d.max_size()<<endl;
	for (int i=0;i<8;i++)
		d.push_front(i);
	cout<<"容器d的大小:"<<d.size()<<",";
	cout<<"容器d能容纳的最大元素个数:"<<d.max_size()<<endl;
	d.insert(d.begin(),6,20);
	cout<<"容器d的大小:"<<d.size()<<",";
	cout<<"容器d能容纳的最大元素个数:"<<d.max_size()<<endl;
	d.pop_back();
	cout <<"容器d的大小:"<<d.size()<<",";
	cout<<"容器d能容纳的最大元素个数:"<<d.max_size()<<endl;
}
