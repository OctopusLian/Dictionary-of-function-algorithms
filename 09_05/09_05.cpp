#include <iostream>
using namespace std;
void main () 
{
	char buf[80];
	cout<<"����������:"<<endl;
	cin.read(buf,8);
	buf[8]='\0';
	cout<<"�������:"<<buf<<endl;
}
