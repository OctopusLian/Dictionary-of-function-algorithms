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
	while (!infile.eof())			/*�ļ�������������ѭ��*/
	{		
		infile.read(buf,4096);		/*һ�ζ�4096���ֽ�*/
		length=infile.gcount();		/*ȡʵ�ʶ����ֽ���*/
		outfile.write(buf,length);	/*��ʵ�ʶ����ֽ���д���ļ�*/
		cout.write(buf,length);		/*����Ļ������ļ��е�����*/
	}
	infile.close();
	outfile.close();
}
