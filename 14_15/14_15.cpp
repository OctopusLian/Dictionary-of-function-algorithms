#include <iostream>
#include <list>
using namespace std;
void main ()
{
	list<int> L;
	list<int> L2(3,76);
	list<int>::iterator it;
	for (int i=1; i<=5; i++) 
		L.push_back(10); 
	cout<<"�����е�Ԫ��:";
	for(it = L.begin();it!=L.end();it++)
		cout<<" "<<*it;
	cout<<endl;
	it = L.insert (L.end(),100); //���ز���Ԫ�ص�λ��
	it--;//����������ǰ�ƶ�һ��λ��
	L.insert (it,L2.begin(),L2.end());
	cout << "�����е�Ԫ��:";
	for (it=L.begin(); it!=L.end(); it++)
		cout << " " << *it;
	cout << endl;
}
