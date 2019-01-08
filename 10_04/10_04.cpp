#include <iostream>
#include <fstream>
using namespace std;
void main ()
{	
	fstream file;
	file.open("test.txt",fstream::in|fstream::out);
	while(file.good())
		cout<<(char)file.get();
	file.close();
}
