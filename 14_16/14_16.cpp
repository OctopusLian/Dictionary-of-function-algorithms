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
	//ɾ����2��Ԫ��
	it=L.begin();
	it++;
	L.erase(it);
	PrintContents(L);
	//ɾ�����2��Ԫ��
	it=L.end();
	it--;
	it--;
	L.erase(it,L.end());
	PrintContents(L);
}
void PrintContents(list<int> L)
{
	list<int>::iterator it;
	cout<<"�����е�Ԫ��:"<<endl;
	for(it=L.begin();it!=L.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}
