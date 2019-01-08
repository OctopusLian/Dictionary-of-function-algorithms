#include <iostream>
#include <set>
using namespace std;
void DispSet(set<int> myset);
void main ()
{
	set<int> myset;
	set<int>::iterator it;
	cout << "集合的元素个数: " << myset.size()<<endl;	
	for (int i=1; i<=6; i++) 
		myset.insert(i*10);
	DispSet(myset);
	myset.insert(12);
	DispSet(myset);
}
void DispSet(set<int> myset)
{
	set<int>::iterator it;
	cout << "集合的元素个数: " << myset.size();	
	cout<<",元素分别是:";
	for( it=myset.begin();it!=myset.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}
