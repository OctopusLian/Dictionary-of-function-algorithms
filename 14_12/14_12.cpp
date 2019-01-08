#include <iostream>
#include <list>
using namespace std;
void main()
{
	list<int> L;
	list<int>::iterator it;
	for(int i=1;i<=5;i++)
		L.push_front(i);
	L.push_front (76);
	L.push_back (85);
	L.push_front (99);
	cout << "ÈÝÆ÷ÖÐµÄÔªËØ:";
	for (it=L.begin(); it!=L.end(); it++)
		cout << " " << *it;
	cout << endl;
}