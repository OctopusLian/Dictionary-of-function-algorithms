#include <iostream>
#include <list>
using namespace std;
void main ()
{
	list<int> L;
	for(int i=0;i<5;i++)
		L.push_back(i+50);
	cout<<"�����еĵ�һ��Ԫ��:"<<L.front()<<endl;
}