#include <iostream>
#include <fstream>
using namespace std;
void main() 
{
	int length;
	char buf[4096];
	ifstream infile;
	ofstream outfile;
	infile.open ("in.txt",ios::in|ios::binary);
	outfile.open("out.txt",ios::out|ios::binary);
	while (!infile.eof())			/*文件不结束，继续循环*/
	{		
		infile.read(buf,4096);		/*一次读4096个字节*/
		length=infile.gcount();		/*取实际读的字节数*/
		outfile.write(buf,length);	/*按实际读的字节数写入文件*/
		cout.write(buf,length);		/*在屏幕上输出文件中的内容*/
	}
	infile.close();
	outfile.close();
}
