#include <iostream>
#include <string>
using namespace std;
void main ()
{
	char buf[60];
	int len;
	string str="Welcome to www.nwu.edu.cn";
	cout<<"�ַ���str����:"<<str<<endl;
	len=str.copy(buf,20,11);
	buf[len]='\0';
	cout <<"����buf�е�����:"<<buf<<endl;
}
