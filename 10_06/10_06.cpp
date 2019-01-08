#include <iostream>
#include <fstream>
using namespace std;
void main () 
{
	int length;
	char*buf;
	ifstream infile;
	infile.open("test.txt",ios::binary);
	infile.seekg (0,ios::end);
	length=infile.tellg();
	infile.seekg (0, ios::beg);
	buf=new char [length];
	infile.read (buf,length);
	cout.write(buf,length);
	infile.close();
}
