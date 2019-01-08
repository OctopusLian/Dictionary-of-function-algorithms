#include<iostream>
#include<fstream>
using namespace std;
void main () 
{
	ifstream file;
	char ch;
	file.open("test.txt");
	if (file.is_open())
	{
		cout <<"File is open.The content is:\n";
		while (file.good())
		{
			ch=file.get();  
			if (file.good())
				cout<<ch;
		}
		cout<<endl;
		file.close();
	}
	else
		cout<<"File is not open.\n";
}
