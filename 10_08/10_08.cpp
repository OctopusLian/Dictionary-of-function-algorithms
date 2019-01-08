#include<fstream>
#include<iostream>
using namespace std;
void main ()
{
	ofstream outfile("test.txt");
	for (int i=101; i<=200; i++)
	{
		outfile <<" "<<i;
		outfile.flush();
		if(i%10==0) 
			outfile<<"\n";
	}	
	outfile<<endl;
	system("type test.txt");
	outfile.close();
}
