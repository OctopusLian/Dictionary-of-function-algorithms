#include <iostream>
using namespace std;
void main () 
{
	char ch;
	int n;
	char str[256];
	cout<<"���������ֻ��ַ�:";
	ch=cin.get();
	if((ch>='0')&&(ch<='9'))
	{
		cin.putback (ch);
		cin >> n;
		cout<<"������������ǣ�"<<n <<endl;
	}
	else
	{
		cin.putback(ch);
		cin>>str;
		cout<<"��������ַ����ǣ�"<<str<<endl;
	}
}
