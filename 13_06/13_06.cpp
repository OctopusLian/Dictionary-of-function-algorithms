#include <iostream>
#include <deque>
using namespace std;
void main()
{
	deque<int> d;
	deque<int>::iterator it;
	int sum=0,a[]={23,12,9,6,15,90,33};
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++) 
		d.push_front(a[i]);
	cout<<"容器中的元素:"<<endl;
	for(it=d.begin();it!=d.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	while(!d.empty())
	{
		sum+=d.front();
		d.pop_front();
	}
	cout<<"容器中元素之和: "<<sum<<endl;
}
