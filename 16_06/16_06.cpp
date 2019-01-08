#include <iostream>
#include <queue>
using namespace std;
void main ()
{
	queue<char> Q;
	int myint;
	for(int i=0;i<5;i++)
		Q.push(i+'A');
	cout<<"队列中的元素:"<<endl;
	while(!Q.empty())
	{
		cout<<Q.front()<<" ";
		Q.pop();
	}
	cout<<endl;
}