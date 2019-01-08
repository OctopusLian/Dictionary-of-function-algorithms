#include<iostream>
using namespace std;
void main () 
{
	double f=3.1415926;
	cout.precision(6);
	cout<<f<<endl;
	cout.precision(10);
	cout<<f<<endl;
	cout.setf(ios::fixed); 
	cout<<f<<endl;
}
