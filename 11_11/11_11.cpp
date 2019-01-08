#include <iostream>
#include <string>
using namespace std;
void main ()
{
	string str("Hello world!");
	cout <<"Length of "<<str<<":"<<str.length()<<endl;
	cout <<"Size of "<<str<<":"<<str.size() <<endl;
	cout <<"Capacity of "<<str<<":"<<str.capacity() <<endl;
	cout <<"Max_size of "<<str<<":"<<str.max_size() <<endl;
}
