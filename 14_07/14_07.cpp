#include <iostream>
#include <list>
using namespace std;
void DispElem(list<float> L)
{
	list<float>::iterator it;
	cout << "�����е�Ԫ��:"<<endl;
	for (it=L.begin();it!=L.end();it++)//ע�⣺����ʹ��it<L.end()
		cout << " " << *it;
	cout << endl;
}
void main ()
{
	list<float> L;
	int i;
	float a[]={2.5,5.0,7.5,10.0,12.5};
	for(i=0;i<5;i++) //��ʼ������L����СΪ5
		L.push_back(a[i]);
	DispElem(L);
	L.resize(3);//�������еĴ�С��С��3��Ԫ��
	DispElem(L);
	L.resize(7,10.5);//�������Ĵ�С��չ��8��Ԫ��,��չ�Ŀռ���10.5���
	DispElem(L);
	L.resize(10);//�������Ĵ�С��չ��10��Ԫ�أ���չ��Ԫ����0
	DispElem(L);
}
