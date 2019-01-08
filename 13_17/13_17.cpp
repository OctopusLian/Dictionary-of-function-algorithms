#include<iostream>
#include<deque>
using namespace std;
void PrintContents(deque<int> d);
void main()
{
	deque<int> d;
	for(int i=0;i<5;i++)
		d.push_front(i+1);
	PrintContents(d);
	//删除第2个元素
	d.erase(d.begin()+1);
	PrintContents(d);
	//删除最后2个元素
	d.erase(d.end()-2,d.end());
	PrintContents(d);
}
void PrintContents(deque<int> d)
{
	deque<int>::iterator p;
	cout<<"容器中的元素:"<<endl;
	for(p=d.begin();p<d.end();p++)
		cout<<" "<<*p;
	cout<<endl;
}