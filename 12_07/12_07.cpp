#include <iostream>
#include <vector>
using namespace std;
void DispElem(vector<int> v)
{
	vector<int>::iterator it;
	cout<<"ÈÝÆ÷ÖÐµÄÔªËØ:\n";
	for(it=v.begin();it!=v.end();it++)
		cout<<"  "<<*it;
	cout<<endl;
}
void main()
{
	vector<int> v;
	int i;
	for (i=1;i<10;i++) 
		v.push_back(i);
	DispElem(v);
	v.resize(5);
	DispElem(v);
	v.resize(10,8);
	DispElem(v);
	v.resize(15);	
	DispElem(v);
}