#include <iostream>
using namespace std;
void main () 
{
	char buf[80];
	cout<<"请输入姓名:"<<endl;
	cin.read(buf,8);
	buf[8]='\0';
	cout<<"你的姓名:"<<buf<<endl;
}
