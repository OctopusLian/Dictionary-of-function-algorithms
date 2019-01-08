#include <iostream>
#include <stack>
using namespace std;
void main ()
{
	stack<char> s;	
	for (int i=0; i<5; ++i) 
		s.push('a'+i);
	cout<<"栈顶元素:"<<s.top()<<endl;
	cout<<"依次出栈的元素是:";
	while (!s.empty())
	{
		cout << " " << s.top();
		s.pop();
	}
	cout<<endl;
}