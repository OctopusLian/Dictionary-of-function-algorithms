	#include<iostream>
	#include<fstream>
	using namespace std;
	void main()
	{
		filebuf *pbuf;
		ifstream file;
		char *buf;
		long size;
		file.open("test.txt");
		pbuf=file.rdbuf();
		size=pbuf->pubseekoff(0,ios_base::end,ios_base::in);/*得到文件的大小*/
		pbuf->pubseekpos(0,ios::in);/*设置位置指针的绝对位置*/
		buf=new char[size];
		pbuf->sgetn(buf,size);/*从输入序列中得到size个字符存入buf中*/
		file.close();
		cout.write(buf,size);/*在屏幕上输出buf中的字符*/
		free(buf);
	}
