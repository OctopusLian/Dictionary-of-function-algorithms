#include <iostream>
#include <set>
using namespace std;
void DispElem(set<int> s)
{
	set<int>::iterator it;
	cout << "集合中的元素:";
	for (it=s.begin(); it!=s.end(); it++)
		cout << " " << *it;
	cout << endl;
}
void main ()
{
	set<int> myset;
	set<int>::iterator it;
	pair<set<int>::iterator,bool> r;
	int a[]={36,12,30,44,93,66};
	//初始化集合:36,12,30,44,93,66
	for (int i=0; i<sizeof(a)/sizeof(a[0]); i++) 
		myset.insert(a[i]);   
	DispElem(myset);
	r = myset.insert(30);	//因为容器中已经有30，所以30不能被插入
	DispElem(myset);
	if (r.second==false) 
		it=r.first;			//迭代器it指向30
	myset.insert (it,32);   //插入32
	DispElem(myset);
	myset.insert (it,19);   //插入19
	DispElem(myset);
	int b[]= {6,20};        //20已经存在，不能插入
	myset.insert (b,b+3);
	DispElem(myset);
}