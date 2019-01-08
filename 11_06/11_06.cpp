#include <iostream>
#include <string>
using namespace std;
void main()
{
	string s("Hello World!");
	size_t i=0;
	cout<<"s中的字符分别是:"<<endl;
	while(i<s.length())
	{
		cout<<s.at(i);
		i++;
	}
	cout<<endl;
}
