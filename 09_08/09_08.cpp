#include <iostream>
using namespace std;
void main () 
{
	char prev;
	cout.width(12);
	cout<<60<<endl;
	prev=cout.fill('x');
	cout<<"��ǰ������ַ�:"<<prev<<endl;
	cout.width(12);
	cout <<60<<endl;
	prev=cout.fill('X');
	cout<<"��ǰ������ַ�:"<<prev<<endl;
	cout.width(12);
	cout <<60<<endl;	
}
