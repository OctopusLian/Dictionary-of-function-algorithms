#include <iostream>
#include <set>
using namespace std;
void DispSet(set<int> myset);
void main ()
{
	set<int> myset;
	set<int>::iterator it;
	cout << "���ϵ�Ԫ�ظ���: " << myset.size()<<endl;	
	for (int i=1; i<=6; i++) 
		myset.insert(i*10);
	DispSet(myset);
	myset.insert(12);
	DispSet(myset);
}
void DispSet(set<int> myset)
{
	set<int>::iterator it;
	cout << "���ϵ�Ԫ�ظ���: " << myset.size();	
	cout<<",Ԫ�طֱ���:";
	for( it=myset.begin();it!=myset.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}
