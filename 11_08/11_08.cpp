#include <iostream>
#include <string>
using namespace std;
void main ()
{
	string str("International Olympiad in Informatics");
	string::reverse_iterator rit=str.rbegin();
	while(rit<str.rend())
	{
		cout<<*rit;
		rit++;
	}
	cout<<endl;
}
