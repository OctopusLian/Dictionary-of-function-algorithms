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
		size=pbuf->pubseekoff(0,ios_base::end,ios_base::in);/*�õ��ļ��Ĵ�С*/
		pbuf->pubseekpos(0,ios::in);/*����λ��ָ��ľ���λ��*/
		buf=new char[size];
		pbuf->sgetn(buf,size);/*�����������еõ�size���ַ�����buf��*/
		file.close();
		cout.write(buf,size);/*����Ļ�����buf�е��ַ�*/
		free(buf);
	}
