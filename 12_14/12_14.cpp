#include <iostream>
#include <vector>
using namespace std;
void main ()
{
	vector<int> v;
	int sum=0;
	for(int i=1;i<=5;i++)
		v.push_back(i*10);
	cout<<"容器中的元素:"<<endl;
	vector<int>::iterator it;
	for(it=v.begin();it<v.end();it++)
		cout<<" "<<*it;
	cout<<endl;
	v.pop_back();
	cout<<"删除一个元素后容器中的元素:"<<endl;
	for(it=v.begin();it<v.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}