#include <iostream>
#include <set>
using namespace std;

void main ()
{

	int a[]={1,11,22,33,44,55,66,77,88,99};
	set<int> myset(a,a+10);	//��ʼ������:1,11,22,33,44,55,66,77,88,99
	set<int>::iterator it,low,up;
	cout<<"�����е�Ԫ��:"<<endl;
	for(it=myset.begin();it!=myset.end();it++)
		cout<<"  "<<*it;
	cout<<endl;
	low=myset.lower_bound (40); //lowָ��44
	cout<<"lowָ��:"<<*low<<endl;
	up=myset.upper_bound (80); //upָ��88
	cout<<"upָ��:"<<*up<<endl;
	myset.erase(low,up);       //ɾ��44 55 66 77
	cout << "�����е�Ԫ��:";
	for (it=myset.begin(); it!=myset.end(); it++)
		cout << "  " << *it;
	cout << endl;
}