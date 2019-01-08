#include <iostream>
#include <string>
using namespace std;
void main ()
{
	string str="Information technology and Math.";
	string sub1="Learn ";
	string sub2="to or not to";
	string sub3="Let us go to school";
	string::iterator it;
	str.insert(0,sub1);                
	str.insert(6,sub2,0,3);        
	str.insert(31,"good idea"); 
	str.insert(31,1,'.');         
	it=str.insert(str.begin(),' '); 
	str.insert(str.end(),2,'.');   
	str.insert (it,sub3.begin(),sub3.begin()+6); 
	cout<<str<<endl;
}
