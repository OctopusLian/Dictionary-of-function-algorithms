#include <iostream>
#include <stack>
using namespace std;
void main ()
{
	stack<int> s;
	s.push(3);
	s.push(5);
	s.push(8);
	cout<<"ջ��Ԫ��:"<<s.top()<<endl;
	cout <<"ջ��Ԫ�ظ���:"<<(int)s.size()<<endl;
}