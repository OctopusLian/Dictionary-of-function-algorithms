#include <iostream>
#include <string>
using namespace std;
void main ()
{
	string str="I graduated from tsinghua university.";
	string sub="Northwest ";
	string::iterator it;
	str.erase(17,8);
	cout<<str<<endl;  
	it=str.begin()+17;
	it=str.erase(it);
	cout<<str<<endl;   
	str.insert(it,sub.begin(),sub.end());
	cout<<str<<endl;    
}
