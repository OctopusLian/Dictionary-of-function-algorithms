#include <iostream>
#include <string>
using namespace std;
void main()
{
	string str1="Visual C++";
	string str2="Visual Basic";
	cout <<"����ǰ:"<<endl;
	cout<<"str1:"<<str1<<endl;
	cout<<"str2:"<<str2<<endl;
	str1.swap(str2);
	cout <<"������:"<<endl;
	cout<<"str1:"<<str1<<endl;
	cout<<"str2:"<<str2<<endl;
}
