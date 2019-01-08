#include <iostream>
#include <set>
using namespace std;
void main ()
{
	set<int> myset;
	set<int>::iterator it;
	int f;
	//插入元素:10 20 30 40 50 60 70 80 90 100
	for (int i=1; i<=10; i++) 
		myset.insert(i*10); 
	it=myset.begin();
	it++; //指向值为20的元素
	myset.erase (it);//删除20
	f=myset.erase (60);//删除60
	if(f==1)
		cout<<"删除元素60成功!"<<endl;
	else
		cout<<"删除60不成功!"<<endl;
	it=myset.find(70);
	myset.erase ( it, myset.end() );//删除70 80 90 100
	cout << "集合中的元素:";
	for (it=myset.begin(); it!=myset.end(); it++)
		cout << " " << *it;
	cout << endl;
}