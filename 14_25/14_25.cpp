#include <iostream>
#include <list>
#include<string>
using namespace std;
void main ()
{
	list<string> L;
	list<string>::iterator it;
	string s[]={"tomato","cabbage","radish","potato"};
	for (int i=0; i<4; i++)
		L.push_back(s[i]);
	cout<<"容器中的元素:"<<endl;
	for (it=L.begin(); it!=L.end(); it++)
		cout << " " << *it;
	cout << endl;
	L.reverse();
	cout<<"颠倒后容器中的元素:"<<endl;
	for (it=L.begin(); it!=L.end(); it++)
		cout << " " << *it;
	cout << endl;
}