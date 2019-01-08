#include <iostream>
using namespace std;
void main ()
{
	cout<<345<<endl;
	cout.width(10);
	cout<<345<<endl;
	cout.width(12);
	cout.fill('A');
	cout<<left<<345<<endl;
}
