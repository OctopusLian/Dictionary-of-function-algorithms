#include <iostream>
#include <set>
using namespace std;
void main ()
{
	set<char> myset;
	set<char>::iterator it;
	//��ʼ������:ABCDE
	for (int i=0; i<5; i++) 
		myset.insert(i+'A');  
	cout<<"�����е�Ԫ��:";
	for (it=myset.begin(); it!=myset.end(); it++)
		cout << " " << *it;
	cout << endl;
	it=myset.find('C');
	cout<<"�ҵ�Ԫ�أ�"<<*it<<endl;
	myset.erase (myset.find('A'));
	cout<<"ɾ��'A'��,�����е�Ԫ��:";
	for (it=myset.begin(); it!=myset.end(); it++)
		cout<<" "<<*it;
	cout<<endl;
}
