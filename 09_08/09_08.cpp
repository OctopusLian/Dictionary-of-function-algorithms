#include <iostream>
using namespace std;
void main () 
{
	char prev;
	cout.width(12);
	cout<<60<<endl;
	prev=cout.fill('x');
	cout<<"先前的填充字符:"<<prev<<endl;
	cout.width(12);
	cout <<60<<endl;
	prev=cout.fill('X');
	cout<<"先前的填充字符:"<<prev<<endl;
	cout.width(12);
	cout <<60<<endl;	
}
