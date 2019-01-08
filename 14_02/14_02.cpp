#include <iostream>
#include <list>
using namespace std;
void main ()
{
	list<int> L1 (8);   
	list<int> L2 (6);   
	cout<<"复制前:"<<endl;
	cout<<"容器L1的大小:"<<L1.size()<<endl;
	cout<<"容器L2的大小:"<<L2.size()<<endl;
	L2=L1;
	cout<<"复制后:"<<endl;
	cout<<"容器L1的大小:"<<L1.size()<<endl;
	cout<<"容器L2的大小:"<<L2.size()<<endl;
}