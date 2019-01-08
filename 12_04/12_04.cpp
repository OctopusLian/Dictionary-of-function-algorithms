#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<char> v;
	for (int i=0; i<=5; i++) 
		v.push_back('A'+i);
	cout <<"ÈÝÆ÷ÖÐµÄÔªËØ:";
	vector<char>::reverse_iterator rit;
	for(rit=v.rbegin();rit<v.rend();rit++)
		cout<<" "<<*rit;
	cout <<endl;
}