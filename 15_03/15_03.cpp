#include <iostream>
#include <stack>
using namespace std;
void main ()
{
	stack<int> s;
	cout << "栈中的元素个数: "<<s.size()<<endl;
	for (int i=1; i<=10; i++) 
		s.push(i);
	cout<<"栈中的元素个数:"<<s.size()<<endl;
	s.pop();
	cout <<"栈中的元素个数:"<<s.size()<<endl;
}