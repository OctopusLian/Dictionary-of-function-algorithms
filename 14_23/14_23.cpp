#include <iostream>
#include <list>
using namespace std;
void InitList(list<double> &L,double a[],int n);
void main ()
{
	list<double> L1, L2;
	list<double>::iterator it;
	double a1[]={4.5,2.2,2.9};
	double a2[]={3.6,7.5,2.1};
	//��ʼ��L1��L2
	InitList(L1,a1,sizeof(a1)/sizeof(a1[0]));
	InitList(L2,a2,sizeof(a2)/sizeof(a2[0]));
	L1.sort();
	L1.merge(L2);
	cout << "�ϲ��������е�Ԫ��(����):"<<endl;
	for (it=L1.begin(); it!=L1.end(); it++)
		cout << " " << *it;
	cout << endl;
	//���³�ʼ��L1��L2
	L1.clear();
	InitList(L1,a1,sizeof(a1)/sizeof(a1[0]));
	InitList(L2,a2,sizeof(a1)/sizeof(a1[0]));
	L2.push_back(4.6);
	L1.sort(greater<double>());
	L2.sort(greater<double>());
	L1.merge(L2,greater<double>());
	cout <<"�ϲ��������е�Ԫ��(����):"<<endl;
	for (it=L1.begin(); it!=L1.end(); it++)
		cout << " " << *it;
	cout << endl;
}
void InitList(list<double> &L,double a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		L.push_back(a[i]);
}



