#include <iostream>
#include <queue>
using namespace std;
void main ()
{
	queue<char> Q;
	for(int i=0;i<4;i++)//�����е�Ԫ��:A,B,C,D
		Q.push(i+'A');
	Q.pop();//'A'������
	Q.push('E');//'E'�����
	cout<<"�����е�Ԫ��:"<<endl;
	while(!Q.empty())
	{
		cout<<Q.front()<<" ";
		Q.pop();
	}
	cout<<endl;
}