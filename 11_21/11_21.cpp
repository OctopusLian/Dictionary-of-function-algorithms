#include <iostream>
#include <string>
using namespace std;
void main ()
{
	string str("TCP functions at the OSI transport layer or layer 4.");
	string str2("layer");
	int pos;
	cout<<"�ַ���:"<<str<<endl;
	pos=str.find(str2);
	if (pos!=string::npos)
		cout<<"'layer'��һ�γ��ֵ�λ��:" <<pos<<endl;
	pos=str.find("layer 5 in TCP/IP",pos+1,5);
	if (pos!=string::npos)
		cout<<"'layer'�ڶ��γ��ֵ�λ��:"<<pos<<endl;
	pos=str.find("System",20);
	if (pos!=string::npos)
		cout<<"'System'���ֵ�λ��:"<<pos<<endl;	
}
