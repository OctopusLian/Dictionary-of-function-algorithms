#include <iostream>
#include <list>
#include <string>
using namespace std;
void main ()
{
	list<string> L;
	list<string>::iterator it;
	string s[]={"Visual C++","Visual Basic","Visual Foxpro","Java"};
	for(int i=0;i<sizeof(s)/sizeof(s[0]);i++)
		L.push_back(s[i]);
	L.sort();
	cout << "ÈÝÆ÷ÖÐµÄÔªËØ(ÉýÐò):"<<endl;
	for (it=L.begin(); it!=L.end(); ++it)
		cout <<"¡¾"<<*it<<"¡¿ ";
	cout << endl;
	L.sort(greater<string>());
	cout << "ÈÝÆ÷ÖÐµÄÔªËØ(½µÐò):"<<endl;
	for (it=L.begin(); it!=L.end(); ++it)
		cout <<"¡¾" << *it<<"¡¿ ";
	cout << endl;
}