#include <iostream>
#include <string>
using namespace std;
void main()
{
	string str("C:\\Ghost\\ghostxp.exe");
	int pos;
	pos=str.find_last_of("\\");
	cout<<"����·��:"<<str<<endl;
	cout<<"�ļ���:"<<str.substr(0,pos)<<endl;
	cout<<"�ļ���:"<<str.substr(pos+1)<<endl;	
}
