#include <iostream>
#include <string>
using namespace std;
void main ()
{
	string first,second,third,fourth,domain;
	string str1("2012 ");
	string str2("Olympic ");
	string str3("Games");
	first="www.";
	second="nwu.";
	third="edu.";
	fourth="cn";
	domain=first+second+third+fourth;
	cout<<domain<<endl;
	str1+=str2;       
	str1+=str3;      
	str1+='\n';        
	cout << str1;
}
