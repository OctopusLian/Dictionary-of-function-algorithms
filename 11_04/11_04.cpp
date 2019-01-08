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
		cout<<"s1与s2相等!"<<endl;
	else
		cout<<"s1与s2不相等!"<<endl;
	if(s1<s2)
		cout<<"s1小于s2!"<<endl;
	else
		cout<<"s1不小于s2!"<<endl;
	if(s3>=s1)
		cout<<"s3大于等于s1!"<<endl;
	else
		cout<<"s3不大于等于s1!"<<endl;
}
