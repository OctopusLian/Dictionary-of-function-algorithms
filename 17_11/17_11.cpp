#include <iostream>
#include <set>
using namespace std;
void main ()
{
	set<char> myset;
	set<char>::iterator it;
	//初始化集合:ABCDE
	for (int i=0; i<5; i++) 
		myset.insert(i+'A');  
	cout<<"集合中的元素:";
	for (it=myset.begin(); it!=myset.end(); it++)
		cout << " " << *it;
	cout << endl;
	it=myset.find('C');
	cout<<"找到元素："<<*it<<endl;
	myset.erase (myset.find('A'));
	cout<<"删除'A'后,集合中的元素:";
	for (it=myset.begin(); it!=myset.end(); it++)
		cout<<" "<<*it;
	cout<<endl;
}
