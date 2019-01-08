#include <iostream>
#include <vector>
using namespace std;
void main ()
{
	vector<int> v;
	for(int i=0;i<200;i++) 
		v.push_back(i);	
	cout <<"容器的实际元素个数: "<<v.size()<<endl;
	cout <<"容器的存储空间大小: "<<v.capacity()<<endl;
	cout <<"容器所能容纳的最大元素个数: "<<v.max_size()<<endl;
}