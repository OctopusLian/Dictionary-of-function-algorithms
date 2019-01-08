#include <iostream>
#include <string>
using namespace std;
void main ()
{
	char buf[60];
	int len;
	string str="Welcome to www.nwu.edu.cn";
	cout<<"字符串str对象:"<<str<<endl;
	len=str.copy(buf,20,11);
	buf[len]='\0';
	cout <<"数组buf中的内容:"<<buf<<endl;
}
