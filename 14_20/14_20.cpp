#include <iostream>
#include <list>
using namespace std;
void main ()
{
	list<int>::iterator it;
	list<int> L;
	for (int i=1; i<=6; i++)	//L1:1 2 3 4 5 6
	     L.push_back(i*10);   
	cout<<"�����е�Ԫ��:";
	for(it=L.begin();it!=L.end();it++)
		cout<<" "<<*it;
	cout<<endl;
	L.remove(50);//�Ƴ�ֵΪ50��Ԫ��
	cout << "�����е�Ԫ��:";
	for (it=L.begin(); it!=L.end(); it++)
		cout << " " << *it;
	cout << endl;
}