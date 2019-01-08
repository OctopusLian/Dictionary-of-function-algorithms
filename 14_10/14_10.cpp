#include <iostream>
#include <list>
using namespace std;
void main ()
{
	list<int> L1;
	list<int> L2;
	list<int>::iterator it;
	L1.assign(5,800);  
	cout<<"容器L1的大小: "<<L1.size()<<endl;
	cout<<"容器L1中的元素: "<<endl;
	for(it=L1.begin();it!=L1.end();it++)
		cout<<" "<<*it;
	cout<<endl;
	L2.assign(L1.begin(),L1.end()); 
	cout<<"容器L2的大小: "<<L2.size()<<endl;
	cout<<"容器L2中的元素: "<<endl;
	for(it=L2.begin();it!=L2.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}
