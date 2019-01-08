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
	cout<<"容器中的元素:";
	for(it = L.begin();it!=L.end();it++)
		cout<<" "<<*it;
	cout<<endl;
	it = L.insert (L.end(),100); //返回插入元素的位置
	it--;//将迭代器向前移动一个位置
	L.insert (it,L2.begin(),L2.end());
	cout << "容器中的元素:";
	for (it=L.begin(); it!=L.end(); it++)
		cout << " " << *it;
	cout << endl;
}
