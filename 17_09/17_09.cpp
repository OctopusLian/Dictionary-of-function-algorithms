#include <iostream>
#include <set>
using namespace std;
void main ()
{
	set<int> myset;
	set<int>::iterator it;
	int f;
	//����Ԫ��:10 20 30 40 50 60 70 80 90 100
	for (int i=1; i<=10; i++) 
		myset.insert(i*10); 
	it=myset.begin();
	it++; //ָ��ֵΪ20��Ԫ��
	myset.erase (it);//ɾ��20
	f=myset.erase (60);//ɾ��60
	if(f==1)
		cout<<"ɾ��Ԫ��60�ɹ�!"<<endl;
	else
		cout<<"ɾ��60���ɹ�!"<<endl;
	it=myset.find(70);
	myset.erase ( it, myset.end() );//ɾ��70 80 90 100
	cout << "�����е�Ԫ��:";
	for (it=myset.begin(); it!=myset.end(); it++)
		cout << " " << *it;
	cout << endl;
}