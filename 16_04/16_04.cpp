#include <iostream>
#include <queue>
using namespace std;
void main ()
{
	queue<int> Q;
	for(int i=0;i<=5;i++)//队列中的元素依次是50,51,52,53,54
		Q.push(i+50);
	cout<<"队头元素:"<<Q.front()<<endl;
	Q.pop();
	cout<<"队头元素:"<<Q.front()<<endl;
}