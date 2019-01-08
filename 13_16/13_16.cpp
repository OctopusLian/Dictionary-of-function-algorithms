#include <iostream>
#include <deque>
using namespace std;
void DispDeque(deque<int> d)
{
	deque<int>::iterator it;
	cout << "ÈÝÆ÷ÖÐµÄÔªËØ:";
	for (it=d.begin(); it<d.end(); ++it)
		cout << " " << *it;
	cout << endl;
}
void main ()
{
	deque<int> d;
	deque<int> d2(3,50);
	deque<int>::iterator it;
	int a[]={10,21,55,3,88,102,78,66};
	for (int i=0; i<sizeof(a)/sizeof(a[0]); i++) 
		d.push_back(a[i]); //d:10,21,55,3,88,102,78,66
	DispDeque(d);
	it=d.begin();
	it = d.insert (it,6); //d:6,10,21,55,3,88,102,78,66
	d.insert(it,2,20); //d:20,20,6,10,21,55,3,88,102,78,66
	DispDeque(d);
	it=d.begin()+3;
	d.insert (it,d2.begin(),d2.end());//d:20,20,6,50,50,50,10,21,55,3,88,102,78,66
	DispDeque(d);
}