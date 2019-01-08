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
	cout<<"����L1:";
	DispList(L1);
	cout<<"����L2:";
	DispList(L2);
	it = L1.begin();
	it++;				//ָ���2��Ԫ��
	it++;				//ָ���3��Ԫ�أ�ָ��"40"
	L1.splice (it, L2);	//��L2�е�Ԫ���ƶ���L1�е�itָ���λ�ã���ʱ L1:60 50 300 200 100 40 30 20 10
	// it��Ȼָ��ԭ����3��Ԫ��"40"
	cout<<"����L1:";
	DispList(L1);
	cout<<"����L2:";
	DispList(L2);
	L2.splice (L2.begin(),L1, it);	//��L1��itָ���Ԫ���ƶ���L2�Ŀ�ͷ��L1: 60 50 300 200 100 30 20 10 ,L2: 40
	cout<<"����L1:";
	DispList(L1);
	cout<<"����L2:";
	DispList(L2);
}