#include <iostream>
#include <deque>
using namespace std;
void main()
{
	deque<char> d(5);
	int i;
	for(i=0;i<d.size();i++)
		d[i]=i+'a';
	cout<<"�����е�Ԫ��:";
	for(i=0;i<d.size();i++)
		cout<<" "<<d[i];
	cout<<endl;
	cout<<"��һ��Ԫ����:"<<d.front()<<endl;
	cout<<"���һ��Ԫ����:"<<d.back()<<endl;
}
