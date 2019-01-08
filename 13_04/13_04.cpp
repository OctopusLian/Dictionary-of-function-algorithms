#include <iostream>
#include <deque>
using namespace std;
void main ()
{
	deque<char> d;
	deque<char>::reverse_iterator it;
	for (int i=0; i<8; i++) 
		d.push_back(i+'A');
	cout << "ÈÝÆ÷dÖÐµÄÔªËØ:";	
	for(it=d.rbegin();it<d.rend();it++)
		cout<<" "<<*it;
	cout << endl;
}