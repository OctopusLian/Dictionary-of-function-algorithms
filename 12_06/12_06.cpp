#include <iostream>
#include <vector>
using namespace std;
void main ()
{
	vector<int> v;
	int s=0;
	for (int i=1;i<=10;i++) 
		v.push_back(i);
	if(v.empty())
	{
		cout<<"����Ϊ��!"<<endl;
		return;
	}
	else
	{
		cout<<"������Ԫ��: ";
		vector<int>::iterator it;
		for(it=v.begin();it<v.end();it++)
		{
			cout<<" "<<*it;
			s+=*it;
		}
		cout<<endl;
	}
	cout<<"������Ԫ�صĺ�: "<<s<<endl;
}