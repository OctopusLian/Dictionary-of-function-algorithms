#include <iostream>
#include <string>
using namespace std;
void main()
{
	string str("C:\\Ghost\\ghostxp.exe");
	int pos;
	pos=str.find_last_of("\\");
	cout<<"完整路径:"<<str<<endl;
	cout<<"文件夹:"<<str.substr(0,pos)<<endl;
	cout<<"文件名:"<<str.substr(pos+1)<<endl;	
}
