#include <fstream>
#include<iostream>
using namespace std;
void main () 
{
	fstream file;
	int pos,length;
	char *buf;
	file.open("test.txt",ios::in|ios::out);
	file.write("Microsoft Visual Studio 2010",26);
	pos=file.tellp();
	file.seekp (pos-2);
	file.write ("2005",5);
	file.seekg(0,ios::end);
	length=file.tellg();
	file.seekg(0,ios::beg);
	buf=new char[length];
	file.read(buf,length);
	cout<<"test.txt文件中的内容如下:\n";
	cout.write(buf,length);
	file.close();
	cout<<endl;
}
