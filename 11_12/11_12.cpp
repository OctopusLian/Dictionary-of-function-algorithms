#include <iostream>
#include <string>
using namespace std;
void main ()
{
	string str("Welcome to Beijing!");
	size_t size;
	cout <<"�ַ���:"<<str<<endl;
	size=str.size();
	cout<<str<<"�ĳ�����:"<<size<<endl;
	str.resize(10);
	size=str.size();
	cout<<"��������str�ĳ��Ⱥ󣬵�ǰstr�ĳ�����:"<<size<<endl;	
	str.resize (11,'!');
	cout<<"��ǰ���ַ���:"<<str<<endl;
}
