#include<iostream>
using namespace std;
void main () 
{
	cout.flags(ios_base::left|ios_base::dec|ios_base::showbase);
	cout.width(10);
	cout<<60<<endl;
	cout.flags(ios_base::right|ios_base::oct|ios_base::showbase);
	cout.width(10);
	cout<<60<<endl;
	cout.flags(ios_base::right|ios_base::scientific|ios_base::showpos);
	cout.width(16);
	cout<<1234.567<<endl;
}
