#include <iostream>
#include <set>
using namespace std;
void DispElem(set<int> s)
{
	set<int>::iterator it;
	cout << "�����е�Ԫ��:";
	for (it=s.begin(); it!=s.end(); it++)
		cout << " " << *it;
	cout << endl;
}
void main ()
{
	set<int> myset;
	set<int>::iterator it;
	pair<set<int>::iterator,bool> r;
	int a[]={36,12,30,44,93,66};
	//��ʼ������:36,12,30,44,93,66
	for (int i=0; i<sizeof(a)/sizeof(a[0]); i++) 
		myset.insert(a[i]);   
	DispElem(myset);
	r = myset.insert(30);	//��Ϊ�������Ѿ���30������30���ܱ�����
	DispElem(myset);
	if (r.second==false) 
		it=r.first;			//������itָ��30
	myset.insert (it,32);   //����32
	DispElem(myset);
	myset.insert (it,19);   //����19
	DispElem(myset);
	int b[]= {6,20};        //20�Ѿ����ڣ����ܲ���
	myset.insert (b,b+3);
	DispElem(myset);
}