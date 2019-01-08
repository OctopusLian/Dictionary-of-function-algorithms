#include <iostream>
#include <string>
using namespace std;
void main ()
{
	string str("Welcome to Beijing!");
	size_t size;
	cout <<"字符串:"<<str<<endl;
	size=str.size();
	cout<<str<<"的长度是:"<<size<<endl;
	str.resize(10);
	size=str.size();
	cout<<"重新设置str的长度后，当前str的长度是:"<<size<<endl;	
	str.resize (11,'!');
	cout<<"当前的字符串:"<<str<<endl;
}
