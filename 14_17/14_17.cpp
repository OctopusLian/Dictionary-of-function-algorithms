#include <iostream>
#include <list>
using namespace std;
void main()
{
	list<int> L;
	list<int>::iterator it;
	for(int i=101;i<=105;i++)
		L.push_back(i);
	cout << "容器中的元素:";
	for (it=L.begin(); it!=L.end(); it++) 
		cout << " " <<*it;
	L.clear();//清除L中的元素
	L.push_back (501);
	L.push_front (502);
	L.push_back (503);
	L.push_front (504);
	cout << "\n容器中的元素:";
	for (it=L.begin();it!=L.end(); it++) 
		cout << " " << *it;
	cout << endl;
}
