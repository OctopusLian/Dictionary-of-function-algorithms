#include <iostream>
#include <list>
using namespace std;
void main ()
{
	list<int> L;
	list<int>::iterator it;
	int sum=0;
	for (int i=10;i<=20;i++) 
		L.push_back(i);
	cout<<"容器中的元素:";
	for(it=L.begin();it!=L.end();it++)
		cout<<" "<<*it;
	cout<<endl;
	for(;!L.empty();L.pop_front())
		sum+=L.front();
	cout<<"容器中元素之和: "<<sum<<endl;
}