#include <iostream>
#include <stack>
using namespace std;
void main ()
{
	stack<int> s;
	cout << "ջ�е�Ԫ�ظ���: "<<s.size()<<endl;
	for (int i=1; i<=10; i++) 
		s.push(i);
	cout<<"ջ�е�Ԫ�ظ���:"<<s.size()<<endl;
	s.pop();
	cout <<"ջ�е�Ԫ�ظ���:"<<s.size()<<endl;
}