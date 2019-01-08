#include <iostream>
#include <deque>
using namespace std;
void main()
{
	deque<int> d1(10,80);   
	deque<int> d2(20,100);   
	cout<<"复制前:"<<endl;
    cout<<"d1的大小:"<<d1.size()<<endl;
	cout<<"d2的大小:"<<d2.size()<<endl;
	d2=d1;
	cout<<"复制后:"<<endl;
	cout<<"d1的大小:"<<d1.size()<<endl;
	cout<<"d2的大小:"<<d2.size()<<endl;
}