#include <iostream>
#include <set>
using namespace std;
void main ()
{
	int a[]={21,29,35,49,52,67,75,88};
	set<int> myset(a,a+8);
	pair<set<int>::iterator,set<int>::iterator> ret;  
	cout<<"�����е�Ԫ��:"<<endl;
	for(set<int>::iterator it=myset.begin();it!=myset.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	ret = myset.equal_range(35);
	cout << "firstָ���Ԫ��: " << *ret.first << endl;
	cout << "secondָ���Ԫ��: " << *ret.second << endl;
}
