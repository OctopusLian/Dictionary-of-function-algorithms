#include <iostream>
using namespace std;
void main() 
{
	char ch;
	cout<<"请输入字符(以'\\n'作为结束):"<<endl;
	do
	{
		ch=cin.get();
		cout.put(ch);
	} while(ch!='\n');
}
