#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<char> v;
	char ch;
	cout<<"请输入要存储的字符('q'或'Q'表示结束):\n";
	cin>>ch;
	while(ch!='q'&&ch!='Q') 
	{
		v.push_back(ch);
		cin>>ch;
	} 
	cout<<"容器中的元素个数是:"<<v.size()<<endl;
	cout<<"容器中的元素:"<<endl;
	for(int i=0;i<v.size();i++) 
		cout<<" "<<v[i];
	cout<<endl;
}