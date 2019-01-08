#include <iostream>
#include <stack>
using namespace std;
void main ()
{
	stack<int> mystack;
	int sum=0;
	for (int i=1; i<=5; ++i) 
		mystack.push(i*10);
	cout<<"栈顶元素:"<<mystack.top()<<endl;
	cout<<"依次出栈的元素是:";
	while (!mystack.empty())
	{
		cout << " " << mystack.top();
		sum+=mystack.top();
		mystack.pop();
	}
	cout<<"\n栈中元素的和:"<<sum<<endl;
}