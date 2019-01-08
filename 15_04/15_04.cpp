#include <iostream>
#include <stack>
using namespace std;
void main ()
{
	stack<int> s;
	int a[]={1,2,3,4,5};
	for(int i=0;i<5;i++)
		s.push(a[i]);
	cout<<" Õ»¶¥ÔªËØ: "<<s.top()<<endl;	
}