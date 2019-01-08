#include <iostream>
#include <list>
using namespace std;
void PrintList(list<int> L,char *str);
void main ()
{
	list<int> L1;                       //空链表
	list<int> L2(4,100);                //链表中包含4个值为100的元素
	list<int> L3(L2.begin(),L2.end());  //用L2的迭代器构造链表L3
	list<int> L4(L3);                   //用L3构造链表L4
	int a[] = {22,67,39,11};
	PrintList(L1,"L1");
	PrintList(L2,"L2");
	PrintList(L3,"L3");
	PrintList(L4,"L4");
	list<int> L5(a, a + sizeof(a) / sizeof(int) );//利用数组a构造链表L5
	PrintList(L5,"L5");
}
void PrintList(list<int> L,char *str)
{
	list<int>::iterator it;
	cout << "链表"<<str<<"的元素: ";
	for (it = L.begin(); it != L.end(); it++)
		cout << *it << " ";
	cout << endl;
}