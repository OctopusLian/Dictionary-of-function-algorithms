#include <iostream>
#include <stack>
using namespace std;
void main ()
{
	stack<int> s;
	int sum=0;
	for (int i=1;i<=10;i++) 
		s.push(i);
	cout<<"�����е�Ԫ��:"<<endl;
	while (!s.empty())
	{
		sum += s.top();
		cout<<s.top()<<"  ";
		s.pop();
	}
	cout << "\n������Ԫ�صĺ�: " <<sum<<endl;
}