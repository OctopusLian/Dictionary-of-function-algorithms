#include <iostream>
#include <vector>
using namespace std;
void main ()
{
	vector<int> v;
	int sum=0;
	for(int i=1;i<=5;i++)
		v.push_back(i*10);
	cout<<"�����е�Ԫ��:"<<endl;
	vector<int>::iterator it;
	for(it=v.begin();it<v.end();it++)
		cout<<" "<<*it;
	cout<<endl;
	v.pop_back();
	cout<<"ɾ��һ��Ԫ�غ������е�Ԫ��:"<<endl;
	for(it=v.begin();it<v.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}