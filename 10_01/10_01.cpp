#include <iostream>
#include <fstream>
using namespace std;
void main ()
{
	ifstream ifs("test.txt",ifstream::in);
	while(ifs.good())
		cout <<(char)ifs.get();
	ifs.close();
}
