#include <iostream>
#include <string>
using namespace std;
void main ()
{
	string str ("Testing iterators!");
	string::iterator it=str.begin();
	cout<<"�ַ���:"<<endl;
	while(it<str.end())
	{
		cout<<*it;
		it++;
	}
	cout<<endl;
}
