#include<string>
#include<iostream>
using namespace std;
void main()
{
	string s1="Welcome to China!";
	string s2="Welcome to Beijing!";
	string s3="Welcome to Xi'an";
	cout<<"s1:"<<s1<<endl;
	cout<<"s2:"<<s2<<endl;
	cout<<"s3:"<<s3<<endl;
	if(s1==s2)
		cout<<"s1��s2���!"<<endl;
	else
		cout<<"s1��s2�����!"<<endl;
	if(s1<s2)
		cout<<"s1С��s2!"<<endl;
	else
		cout<<"s1��С��s2!"<<endl;
	if(s3>=s1)
		cout<<"s3���ڵ���s1!"<<endl;
	else
		cout<<"s3�����ڵ���s1!"<<endl;
}
