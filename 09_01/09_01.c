#include <iostream>
#include <fstream>
using namespace std;
void main () 
{
	char ch,str[256];
	ifstream infile;
	cout << "�������ļ���('E'��ΪΪ������):\n";
	cin.get(str,256,'E');
	infile.open(str);
	cout<<"�ļ�"<<str<<"����������:"<<endl;
	while(infile.good())
	{
		ch=infile.get();
		cout<<ch;
	}
	cout<<endl;
	infile.close();
}
