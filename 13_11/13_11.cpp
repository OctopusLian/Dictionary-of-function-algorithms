#include <iostream>
#include <deque>
using namespace std;
void main ()
{
	deque<int> d1;
	deque<int> d2;
	int i;
	d1.assign(6,10);  
	cout<<"容器d1的大小: "<<d1.size()<<endl;
	cout<<"容器d1中的元素: "<<endl;
	for(i=0;i<d1.size();i++)
		cout<<" "<<d1.at(i);
	cout<<endl;
	d2.assign(d1.begin()+2,d1.end()-1); 
	cout<<"容器d2的大小: "<<d2.size()<<endl;
	cout<<"容器d2中的元素: "<<endl;
	for(i=0;i<d2.size();i++)
		cout<<" "<<d2.at(i);
	cout<<endl;
}



