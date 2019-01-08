#include <iostream>
#include <cstring>
#include <string>
using namespace std;
void main()
{
	char *cstr,*p;
	string str("Computer software engineer");
	cstr=new char[str.size()+1];
	strcpy(cstr,str.c_str());
	for(p=strtok(cstr," ");p!='\0';)
	{
		cout<<p<<endl;
		p=strtok('\0'," ");
	}
	delete[] cstr;  
}
