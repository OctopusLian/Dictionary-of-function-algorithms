#include <iostream>
#include <list>
using namespace std;
void main ()
{
	list<int> L;
	list<int>::iterator it;
	for(int i=0;i<5;i++)
		L.push_back(i+50);
	cout<<"�����е�Ԫ��:";
	for(it=L.begin();it!=L.end();it++)
		cout<<" "<<*it;
	cout<<endl;
	cout<<"�����е����һ��Ԫ��:"<<L.back()<<endl;
}