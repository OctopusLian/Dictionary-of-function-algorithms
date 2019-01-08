#include <iostream>
#include <list>
using namespace std;
void main()
{
	list<int> L(5);
	cout<<"容器L的实际大小:"<<L.size()<<",";
	cout<<"能容纳的最大元素个数:"<<L.max_size()<<endl;
	for (int i=1;i<=5;i++)
		L.push_back(i);
	cout<<"容器L的实际大小:"<<L.size()<<",";
	cout<<"能容纳的最大元素个数:"<<L.max_size()<<endl;
	L.insert(L.begin(),5,20);
	cout<<"容器L的实际大小:"<<L.size()<<",";
	cout<<"能容纳的最大元素个数:"<<L.max_size()<<endl;
	L.pop_back();
	cout <<"容器L的实际大小:"<<L.size()<<",";
	cout<<"能容纳的最大元素个数:"<<L.max_size()<<endl;
}
