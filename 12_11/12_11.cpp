#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<int> v(5);
	int i;
	for(i=0;i<v.size();i++)
		v[i]=i+1;
	cout<<"容器中的元素:"<<endl;
	for(i=0;i<v.size();i++)
		cout<<" "<<v[i];
	cout<<endl;
	cout<<"第一个元素是:"<<v.front()<<endl;
	cout<<"最后一个元素是:"<<v.back()<<endl;
}