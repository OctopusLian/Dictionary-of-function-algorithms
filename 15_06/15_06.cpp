#include <iostream>
#include <stack>
using namespace std;
void main ()
{
	stack<int> mystack;
	int sum=0;
	for (int i=1; i<=5; ++i) 
		mystack.push(i*10);
	cout<<"ջ��Ԫ��:"<<mystack.top()<<endl;
	cout<<"���γ�ջ��Ԫ����:";
	while (!mystack.empty())
	{
		cout << " " << mystack.top();
		sum+=mystack.top();
		mystack.pop();
	}
	cout<<"\nջ��Ԫ�صĺ�:"<<sum<<endl;
}