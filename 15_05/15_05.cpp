#include <iostream>
#include <stack>
using namespace std;
void main ()
{
	stack<char> s;	
	for (int i=0; i<5; ++i) 
		s.push('a'+i);
	cout<<"ջ��Ԫ��:"<<s.top()<<endl;
	cout<<"���γ�ջ��Ԫ����:";
	while (!s.empty())
	{
		cout << " " << s.top();
		s.pop();
	}
	cout<<endl;
}