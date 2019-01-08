#include <iostream>
#include <list>
using namespace std;
void DispElem(list<float> L)
{
	list<float>::iterator it;
	cout << "容器中的元素:"<<endl;
	for (it=L.begin();it!=L.end();it++)//注意：不能使用it<L.end()
		cout << " " << *it;
	cout << endl;
}
void main ()
{
	list<float> L;
	int i;
	float a[]={2.5,5.0,7.5,10.0,12.5};
	for(i=0;i<5;i++) //初始化容器L，大小为5
		L.push_back(a[i]);
	DispElem(L);
	L.resize(3);//将容器中的大小缩小到3个元素
	DispElem(L);
	L.resize(7,10.5);//将容器的大小扩展到8个元素,扩展的空间以10.5填充
	DispElem(L);
	L.resize(10);//将容器的大小扩展到10个元素，扩展的元素是0
	DispElem(L);
}
