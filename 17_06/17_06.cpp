#include <iostream>
#include <set>
using namespace std;
void main ()
{
	int i;
	set<int> myset;
	if (myset.max_size()>2000)
	{
		for (i=0; i<2000; i++) 
			myset.insert(i);
		cout << "����������2000����������.\n";
	}
	else 
		cout << "���ϲ�������2000����������.\n";
	cout<<"���ϵ�ʵ��Ԫ�ظ���:"<<myset.size()<<endl;
}
