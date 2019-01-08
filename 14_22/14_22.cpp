#include <list>
#include <iostream>
using namespace std;
void main()
{
	list<int> L;
	not_equal_to<int> mypred;
		list<int>::iterator it;
	int a[]={12,5,5,5,8,23,12,55,9,9,38,76};
	int sz=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<sz;i++)
		L.push_back(a[i]);
	cout<<"容器中的元素:"<<endl;
	for (it=L.begin(); it!=L.end(); it++)
		cout << *it << " ";
	cout << endl;
	L.unique();
	cout<<"容器中的元素:"<<endl;
	for (it=L.begin(); it!=L.end(); it++)
		cout << *it << " ";
	cout << endl;
	L.unique(mypred);
	cout<<"容器中的元素:"<<endl;
	for (it=L.begin(); it!=L.end(); it++)
		cout << *it << " ";
	cout << endl;
}
