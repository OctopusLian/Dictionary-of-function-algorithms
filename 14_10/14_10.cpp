#include <iostream>
#include <list>
using namespace std;
void main ()
{
	list<int> L1;
	list<int> L2;
	list<int>::iterator it;
	L1.assign(5,800);  
	cout<<"����L1�Ĵ�С: "<<L1.size()<<endl;
	cout<<"����L1�е�Ԫ��: "<<endl;
	for(it=L1.begin();it!=L1.end();it++)
		cout<<" "<<*it;
	cout<<endl;
	L2.assign(L1.begin(),L1.end()); 
	cout<<"����L2�Ĵ�С: "<<L2.size()<<endl;
	cout<<"����L2�е�Ԫ��: "<<endl;
	for(it=L2.begin();it!=L2.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}
