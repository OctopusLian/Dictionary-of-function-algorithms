#include <iostream>
#include <list>
using namespace std;
void main()
{
	list<char> L(5,'S');
	list<char>::iterator it;
	for(int i=0;i<5;i++)
		L.push_back(i+'A');
	cout<<"�����е�Ԫ�ظ�����:"<<L.size()<<endl;
	cout<<"�����е�Ԫ��:"<<endl;
	for(it=L.begin();it!=L.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}
