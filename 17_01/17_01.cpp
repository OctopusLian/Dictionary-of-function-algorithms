#include <iostream>
#include <set>
using namespace std;
void main()
{
	set<int> s1;             //��set����
	set<int>::iterator it;
	int a[]= {1,2,3,4,5};
	set<int> s2 (a,a+5);     //����ָ������ʼ��set����
	set<int> s3 (s2);        //���ÿ������캯����ʼ��set����
	cout<<"����s2�е�Ԫ��:"<<endl;
	for(it=s2.begin();it!=s2.end();it++)
		cout<<" "<<*it;
	cout<<endl;
	cout<<"����s3�е�Ԫ��:"<<endl;
	for(it=s3.begin();it!=s3.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}