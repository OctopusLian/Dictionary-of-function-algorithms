#include <iostream>
#include <stack>
using namespace std;
void main ()
{
	stack<int> s;
	s.push(3);
	s.push(5);
	s.push(8);
	cout<<"栈顶元素:"<<s.top()<<endl;
	cout <<"栈中元素个数:"<<(int)s.size()<<endl;
}