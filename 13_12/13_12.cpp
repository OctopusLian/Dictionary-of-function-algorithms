#include <iostream>
#include <deque>
using namespace std;
void main()
{
	deque<char> d;
	deque<char>::iterator p;
	for(int i=0;i<5;i++)
		d.push_back(i+'A');
	cout<<"容器中的元素个数是:"<<d.size()<<endl;
	cout<<"容器中的元素:"<<endl;
	for(p=d.begin();p!=d.end();p++)
		cout<<" "<<*p;
	cout<<endl;
}
