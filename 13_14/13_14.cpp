#include <iostream>
#include <deque>
using namespace std;
int Sum(deque<int> d);
void main ()
{
	deque<int> d; 
	int s=0;
	for(int i=1;i<6;i++)
		d.push_back(i*10);
	cout << "�����е�Ԫ��:";
	s=Sum(d);
	cout<<"\n������Ԫ��֮��:"<<s<<endl;
	d.pop_back();
	cout << "�����е�Ԫ��:";
	s=Sum(d);
	cout<<"\n������Ԫ��֮��:"<<s<<endl;
}
int Sum(deque<int> d)
{
	deque<int>::iterator p;
	int s=0;
	p=d.begin();
	while(p!=d.end())
	{
		cout<<" "<<*p;
		s+=*p;
		p++;
	}
	return s;	
}