#include <iostream>
using namespace std;
void main () 
{
	char ch,str[80];
	int n;	
	cout<<"请输入一个数字或字符: ";
	ch=cin.peek();	
	if((ch>='0')&&(ch<='9'))
	{
		cin>>n;
		cout<<"你输入的数字是:" <<n<<endl;
	}
	else
	{
		cin>>str;
		cout<<"你输入的字符串是:"<<str<<endl;
	}
}
