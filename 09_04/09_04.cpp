#include <iostream>
using namespace std;
void main () 
{
	char ch,str[80];
	int n;	
	cout<<"������һ�����ֻ��ַ�: ";
	ch=cin.peek();	
	if((ch>='0')&&(ch<='9'))
	{
		cin>>n;
		cout<<"�������������:" <<n<<endl;
	}
	else
	{
		cin>>str;
		cout<<"��������ַ�����:"<<str<<endl;
	}
}
