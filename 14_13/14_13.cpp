#include <iostream>
#include <list>
using namespace std;
int Sum(list<int> d);
void main ()
{
	list<int> L; 
	int s=0;
	for(int i=1;i<=10;i++)
		L.push_back(i);
	s=Sum(L);
	cout<<"\n容器中元素之和:"<<s<<endl;
	L.pop_back();
	s=Sum(L);
	cout<<"\n容器中元素之和:"<<s<<endl;
}
int Sum(list<int> L)
{
	list<int>::iterator p;
	int s=0;
	cout<<"容器中的元素:";
	p=L.begin();
	while(p!=L.end())
	{
		cout<<" "<<*p;
		s+=*p;
		p++;
	}
	return s;	
}
