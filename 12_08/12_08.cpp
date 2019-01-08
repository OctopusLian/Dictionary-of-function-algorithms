#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<int> v;
	v.push_back(25);
	cout<<"重新分配存储空间前:"<<endl;
	cout<<"容器的存储空间大小:"<<v.capacity()<<endl;
	cout<<"容器的实际元素个数:"<<v.size()<<endl;
	cout<<"容器所能容纳的元素个数:"<<v.max_size()<<endl;
	v.reserve(100);
	cout<<"重新分配存储空间后:"<<endl;
	cout<<"容器的存储空间大小:"<<v.capacity()<<endl;
	cout<<"容器的实际元素个数:"<<v.size()<<endl;
	cout<<"容器所能容纳的元素个数:"<<v.max_size()<<endl;	
}