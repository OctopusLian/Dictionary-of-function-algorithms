#include <iostream>
#include <queue>
using namespace std;
void main ()
{
	queue<char> Q;
	for(int i=0;i<4;i++)//队列中的元素:A,B,C,D
		Q.push(i+'A');
	Q.pop();//'A'出队列
	Q.push('E');//'E'入队列
	cout<<"队列中的元素:"<<endl;
	while(!Q.empty())
	{
		cout<<Q.front()<<" ";
		Q.pop();
	}
	cout<<endl;
}