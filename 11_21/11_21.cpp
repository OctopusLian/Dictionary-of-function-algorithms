#include <iostream>
#include <string>
using namespace std;
void main ()
{
	string str("TCP functions at the OSI transport layer or layer 4.");
	string str2("layer");
	int pos;
	cout<<"字符串:"<<str<<endl;
	pos=str.find(str2);
	if (pos!=string::npos)
		cout<<"'layer'第一次出现的位置:" <<pos<<endl;
	pos=str.find("layer 5 in TCP/IP",pos+1,5);
	if (pos!=string::npos)
		cout<<"'layer'第二次出现的位置:"<<pos<<endl;
	pos=str.find("System",20);
	if (pos!=string::npos)
		cout<<"'System'出现的位置:"<<pos<<endl;	
}
