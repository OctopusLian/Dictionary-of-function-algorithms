#include <iostream>
#include <string>
using namespace std;
void main ()
{
	string s1 ("Standard Template Library");
	string s2;
	string s3 (s1);
	string s4 (s1,9,8);
	string s5 ("Sequence Container", 7);
	string s6 ("Another character sequence");
	string s7 (10, 'C');
	string s8 (s1.begin(), s1.begin()+8);
	cout<<"�ַ���1:"<<s1<<"\n�ַ���2:"<<s2<<"\n�ַ���3:"<<s3;
	cout<<"\n�ַ���4:"<<s4<<"\n�ַ���5:"<<s5<<"\n�ַ���6:";
	cout<<s6<<"\n�ַ���7:"<<s7<<"\n�ַ���8:"<<s8<< endl;
}
