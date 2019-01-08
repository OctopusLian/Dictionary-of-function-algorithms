#include <iostream>
#include <string>
using namespace std;
void main ()
{
	string str1="Physically,a bus is a set of wires.";
	string str2="Welcome to Visual C++ world!";
	string str3="I like Basic Program language!";
	str1.replace(0,35,str2);
	cout<<str1<<endl;
	str1.replace(18,3,str3,7,5);
	cout<<str1<<endl;
	string::iterator it=str1.begin();   
	str1.replace(it+18,it+22,"Foxpro");
	cout<<str1<<endl;
	str1.replace(str1.end()-8,str1.end()-1,4,'!');
	cout<<str1<<endl;
}
