#include <iostream>
#include <list>
using namespace std;
void main ()
{
	list<int> L1 (8);   
	list<int> L2 (6);   
	cout<<"����ǰ:"<<endl;
	cout<<"����L1�Ĵ�С:"<<L1.size()<<endl;
	cout<<"����L2�Ĵ�С:"<<L2.size()<<endl;
	L2=L1;
	cout<<"���ƺ�:"<<endl;
	cout<<"����L1�Ĵ�С:"<<L1.size()<<endl;
	cout<<"����L2�Ĵ�С:"<<L2.size()<<endl;
}