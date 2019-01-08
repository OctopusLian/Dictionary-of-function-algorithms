#include <iostream>
#include <deque>
using namespace std;
void main ()
{
	deque<int> d(3,20); 
	deque<int>::iterator p;
	d.push_front(60);
	d.push_back(99);
	d.push_front(90);
	cout << "ÈÝÆ÷ÖÐµÄÔªËØ:";
	p=d.begin();
	while(p!=d.end())
	{
		cout<<" "<<*p;
		p++;
	}
	cout<<endl;
}