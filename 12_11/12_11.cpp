#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<int> v(5);
	int i;
	for(i=0;i<v.size();i++)
		v[i]=i+1;
	cout<<"�����е�Ԫ��:"<<endl;
	for(i=0;i<v.size();i++)
		cout<<" "<<v[i];
	cout<<endl;
	cout<<"��һ��Ԫ����:"<<v.front()<<endl;
	cout<<"���һ��Ԫ����:"<<v.back()<<endl;
}