#include <iostream>
#include <set>
using namespace std;
void main()
{
	int a[] = {45,33,60,29,7,12};
	set<int> s(a,a+6);
	set<int>::iterator it;
	cout<<"集合中的元素:";
	for (it=s.begin();it!=s.end();it++)
		cout <<" "<<*it;
	cout<<endl;
}