#include <iostream>
#include <deque>
using namespace std;
void main ()
{
	deque<int> d1;
	deque<int> d2;
	int i;
	d1.assign(6,10);  
	cout<<"����d1�Ĵ�С: "<<d1.size()<<endl;
	cout<<"����d1�е�Ԫ��: "<<endl;
	for(i=0;i<d1.size();i++)
		cout<<" "<<d1.at(i);
	cout<<endl;
	d2.assign(d1.begin()+2,d1.end()-1); 
	cout<<"����d2�Ĵ�С: "<<d2.size()<<endl;
	cout<<"����d2�е�Ԫ��: "<<endl;
	for(i=0;i<d2.size();i++)
		cout<<" "<<d2.at(i);
	cout<<endl;
}



