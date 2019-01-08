#include<iostream>
#include<vector>
using namespace std;
void main ()
{
	vector<char> v;
	vector<char>::iterator it;
	for (int i=0; i<8; i++) 
		v.push_back('A'+i);
	cout <<"ÈÝÆ÷ÖÐµÄÔªËØ:";
	for (it=v.begin();it<v.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}