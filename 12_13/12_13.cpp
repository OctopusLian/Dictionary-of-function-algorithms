#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<char> v;
	char ch;
	cout<<"������Ҫ�洢���ַ�('q'��'Q'��ʾ����):\n";
	cin>>ch;
	while(ch!='q'&&ch!='Q') 
	{
		v.push_back(ch);
		cin>>ch;
	} 
	cout<<"�����е�Ԫ�ظ�����:"<<v.size()<<endl;
	cout<<"�����е�Ԫ��:"<<endl;
	for(int i=0;i<v.size();i++) 
		cout<<" "<<v[i];
	cout<<endl;
}