#include <iostream>
#include <set>
using namespace std;
void main ()
{
	set<char>::iterator it;
	char ch[]={'A','B','C','D','E'};
	set<char> myset(ch,ch+5);
	cout << "�����е�Ԫ��:";
	for (it=myset.begin(); it!=myset.end(); it++)
		cout << " " << *it;
	myset.clear();
	myset.insert ('X');
	myset.insert ('Y');
	cout << "\n�����е�Ԫ��:";
	for (it=myset.begin(); it!=myset.end(); it++)
		cout << " " << *it;	
	cout << endl;
}