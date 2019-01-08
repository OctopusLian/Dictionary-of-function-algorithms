#include <iostream>
#include <list>
using namespace std;
void DispList(list<int> L)
{
	list<int>::iterator it;
	for(it=L.begin();it!=L.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}
void main ()
{
	list<int>::iterator it;
	int a[]={60,50,40,30,20,10};
	list<int> L1(a,a+6), L2;//L1:60 50 40 30 20 10  
	for (int i=1; i<=3; i++)		//L2:300 200 100
		L2.push_front(i*100);   
	cout<<"容器L1:";
	DispList(L1);
	cout<<"容器L2:";
	DispList(L2);
	it = L1.begin();
	it++;				//指向第2个元素
	it++;				//指向第3个元素，指向"40"
	L1.splice (it, L2);	//将L2中的元素移动到L1中的it指向的位置，此时 L1:60 50 300 200 100 40 30 20 10
	// it仍然指向原来第3个元素"40"
	cout<<"容器L1:";
	DispList(L1);
	cout<<"容器L2:";
	DispList(L2);
	L2.splice (L2.begin(),L1, it);	//将L1中it指向的元素移动到L2的开头，L1: 60 50 300 200 100 30 20 10 ,L2: 40
	cout<<"容器L1:";
	DispList(L1);
	cout<<"容器L2:";
	DispList(L2);
}