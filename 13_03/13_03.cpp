#include <iostream>
#include <deque>
using namespace std;
void main()
{
	deque<char> d;
	deque<char>::iterator it;
	for (int i=0; i<=5; i++) 
		d.push_back(i+'A');
	cout<<"����d�е�Ԫ��:";
	for(it=d.begin();it!=d.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}