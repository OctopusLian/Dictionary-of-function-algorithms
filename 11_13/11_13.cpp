#include <iostream>
#include <string>
using namespace std;
void main ()
{
	string str;
	int i;
	str.reserve(26);
	for(i=0;i<26;i++)
		str.append(1,'a'+i);
	cout<<"×Ö·û´®:"<<str<<endl;
}
