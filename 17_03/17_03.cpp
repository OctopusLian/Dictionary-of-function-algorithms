#include <iostream>
#include <set>
using namespace std;
void main ()
{
	int a[] = {78,21,64,49,17};
	set<int> myset (a,a+5);
	set<int>::iterator it;
	set<int>::reverse_iterator rit;
	cout << "�����е�Ԫ��:";
	for ( it=myset.begin() ; it!= myset.end();it++ )
		cout << " " << *it;
	cout << endl;
	cout << "�����е�Ԫ��:";
	for ( rit=myset.rbegin() ; rit != myset.rend(); rit++ )
		cout << " " << *rit;
	cout << endl;
}
