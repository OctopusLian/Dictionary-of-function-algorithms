#include <iostream>
#include <string>
using namespace std;
void main()
{
	string str1("Welcome to my hometown.");
	string str2("c:\\program file\\herosoft");
	int pos;
	cout<<"�ַ���str1:"<<str1<<endl;
	pos=str1.find_first_of("cet");
	while(pos!=string::npos)
	{
		str1[pos]='#';
		pos=str1.find_first_of("cet",pos+1);
	}
	cout<<"�ַ���str1:"<<str1<<endl;
	cout<<"�ַ���str2:"<<str2<<endl;
	pos=str2.find_last_of("\\");
	if(pos!=string::npos)
		cout<<"'\\\\'���ֵ�λ��:"<<pos<<endl;
}
