#include <iostream>
#include <set>
using namespace std;
void main()
{
	set<int> s1;             //空set集合
	set<int>::iterator it;
	int a[]= {1,2,3,4,5};
	set<int> s2 (a,a+5);     //利用指针对象初始化set集合
	set<int> s3 (s2);        //利用拷贝构造函数初始化set集合
	cout<<"集合s2中的元素:"<<endl;
	for(it=s2.begin();it!=s2.end();it++)
		cout<<" "<<*it;
	cout<<endl;
	cout<<"集合s3中的元素:"<<endl;
	for(it=s3.begin();it!=s3.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}