#include <iostream>
#include <vector>
using namespace std;
void main ()
{
	vector<int> v;
	for(int i=0;i<200;i++) 
		v.push_back(i);	
	cout <<"������ʵ��Ԫ�ظ���: "<<v.size()<<endl;
	cout <<"�����Ĵ洢�ռ��С: "<<v.capacity()<<endl;
	cout <<"�����������ɵ����Ԫ�ظ���: "<<v.max_size()<<endl;
}