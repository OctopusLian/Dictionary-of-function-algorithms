#include <iostream>
#include <list>
using namespace std;
void main()
{
	list<char> L(5,'S');
	list<char>::iterator it;
	for(int i=0;i<5;i++)
		L.push_back(i+'A');
	cout<<"容器中的元素个数是:"<<L.size()<<endl;
	cout<<"容器中的元素:"<<endl;
	for(it=L.begin();it!=L.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}
