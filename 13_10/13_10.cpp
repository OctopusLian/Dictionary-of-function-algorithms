#include <iostream>
#include <deque>
using namespace std;
void main()
{
	deque<char> d(5);
	int i;
	for(i=0;i<d.size();i++)
		d[i]=i+'a';
	cout<<"容器中的元素:";
	for(i=0;i<d.size();i++)
		cout<<" "<<d[i];
	cout<<endl;
	cout<<"第一个元素是:"<<d.front()<<endl;
	cout<<"最后一个元素是:"<<d.back()<<endl;
}
