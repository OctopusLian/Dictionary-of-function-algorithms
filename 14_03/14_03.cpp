#include <iostream>
#include <list>
using namespace std;
void main ()
{
	char a[] = "Hello World!";
	int sz=strlen(a);
	list<char> d(a,a+sz);
	list<char>::iterator it;
	cout << "�����е�Ԫ��:";
	for (it=d.begin();it!=d.end();it++)
		cout<<*it;
	cout<<endl;
}