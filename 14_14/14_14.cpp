#include <iostream>
#include <list>
using namespace std;
int Sum(list<int> d);
void main ()
{
	list<int> L; 
	int s=0;
	for(int i=1;i<6;i++)
		L.push_back(i*10);
	s=Sum(L);
	cout<<"\n容器中元素之和:"<<s<<endl;
	L.pop_front();
	L.pop_front();
	s=Sum(L);
	cout<<"\n容器中元素之和:"<<s<<endl;
}
int Sum(list<int> L)
{
	list<int>::iterator it;
	int s=0;
	cout << "容器中的元素:";
	it=L.begin();
	while(it!=L.end())
	{
		cout<<" "<<*it;
		s+=*it;
		it++;
	}
	return s;	
}
