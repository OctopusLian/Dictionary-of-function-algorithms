#include <iostream>
#include <set>
using namespace std;
void DispSet(set<int> s,char *str);
void main ()
{
	set<int> s1; 
	set<int> s2;
	for(int i=1;i<=3;i++)
		s1.insert(i*10);
	for(i=4;i<=6;i++)
		s2.insert(i*10);
	cout<<"����ǰ:"<<endl;
	DispSet(s1,"s1");
	DispSet(s2,"s2");
	s1.swap(s2);
	cout<<"������:"<<endl;
	DispSet(s1,"s1");
	DispSet(s2,"s2");
}
void DispSet(set<int> s,char *str)
{
	set<int>::iterator it;
	cout<<"����"<<str<<"�е�Ԫ��:";
	for(it=s.begin();it!=s.end();it++)
		cout<<*it<<" ";
	cout<<endl;
}