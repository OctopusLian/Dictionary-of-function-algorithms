#include <iostream>
#include <list>
using namespace std;
void main ()
{
	list<int> L;
	list<int>::iterator it;
	list<int>::reverse_iterator rit;
	for (int i=1; i<=8; i++) 
		L.push_back(i);
	cout << "�����е�Ԫ��(����):";
	for(it=L.begin();it!=L.end();it++)
		cout<<" "<<*it;
	cout<<endl;
	cout << "�����е�Ԫ��(����):";
	for (rit=L.rbegin();rit!=L.rend();rit++)
		cout << " " << *rit;
	cout << endl;
}
