#include <iostream>
using namespace std;
void main () 
{
	char ch;
	int n;
	char str[256];
	cout<<"请输入数字或字符:";
	ch=cin.get();
	if((ch>='0')&&(ch<='9'))
	{
		cin.putback (ch);
		cin >> n;
		cout<<"你输入的数字是："<<n <<endl;
	}
	else
	{
		cin.putback(ch);
		cin>>str;
		cout<<"你输入的字符串是："<<str<<endl;
	}
}
