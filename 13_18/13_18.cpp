#include <iostream>
#include <deque>
using namespace std;
void main()
{
	deque<int> d;
	for(int i=0;i<5;i++)
		d.push_back(i+100);
	cout << "容器中的元素:";
	for (i=0; i<d.size(); i++) 
		cout << " " << d[i];
	d.clear();
	d.push_back (60);
	d.push_back (61);
	cout << "\n容器中的元素:";
	for (i=0; i<d.size(); i++) 
		cout << " " << d[i];
	cout << endl;
}