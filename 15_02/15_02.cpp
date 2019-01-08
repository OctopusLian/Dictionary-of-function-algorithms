#include <iostream>
#include <stack>
using namespace std;
void main ()
{
	stack<int> s;
	int sum=0;
	for (int i=1;i<=10;i++) 
		s.push(i);
	cout<<"容器中的元素:"<<endl;
	while (!s.empty())
	{
		sum += s.top();
		cout<<s.top()<<"  ";
		s.pop();
	}
	cout << "\n容器中元素的和: " <<sum<<endl;
}