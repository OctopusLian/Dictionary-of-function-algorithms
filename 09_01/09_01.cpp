#include <iostream>
#include <fstream>
using namespace std;
void main () 
{
	char ch,str[256];
	ifstream infile;
	cout << "请输入文件名('E'作为为结束符):\n";
	cin.get(str,256,'E');
	infile.open(str);
	cout<<"文件"<<str<<"的内容如下:"<<endl;
	while(infile.good())
	{
		ch=infile.get();
		cout<<ch;
	}
	cout<<endl;
	infile.close();
}
