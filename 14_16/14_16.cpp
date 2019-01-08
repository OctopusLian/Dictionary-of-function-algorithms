#include<iostream>
#include<list>
using namespace std;
void PrintContents(list<int> L);
void main()
{
	list<int> L;
	list<int>::iterator it;
	for(int i=0;i<8;i++)
		L.push_back(i+1);
	PrintContents(L);
	//删除第2个元素
	it=L.begin();
	it++;
	L.erase(it);
	PrintContents(L);
	//删除最后2个元素
	it=L.end();
	it--;
	it--;
	L.erase(it,L.end());
	PrintContents(L);
}
void PrintContents(list<int> L)
{
	list<int>::iterator it;
	cout<<"容器中的元素:"<<endl;
	for(it=L.begin();it!=L.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}
