#include <iostream>
#include <list>
using namespace std;
void PrintList(list<int> L,char *str);
void main ()
{
	list<int> L1;                       //������
	list<int> L2(4,100);                //�����а���4��ֵΪ100��Ԫ��
	list<int> L3(L2.begin(),L2.end());  //��L2�ĵ�������������L3
	list<int> L4(L3);                   //��L3��������L4
	int a[] = {22,67,39,11};
	PrintList(L1,"L1");
	PrintList(L2,"L2");
	PrintList(L3,"L3");
	PrintList(L4,"L4");
	list<int> L5(a, a + sizeof(a) / sizeof(int) );//��������a��������L5
	PrintList(L5,"L5");
}
void PrintList(list<int> L,char *str)
{
	list<int>::iterator it;
	cout << "����"<<str<<"��Ԫ��: ";
	for (it = L.begin(); it != L.end(); it++)
		cout << *it << " ";
	cout << endl;
}