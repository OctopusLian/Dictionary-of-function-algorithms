#include <iostream>
#include <queue>
using namespace std;
void main ()
{
	queue<int> q;  
	q.push(10);
	q.push(20);
	q.push(30);
	cout<<"队头元素:"<<q.front()<<endl;
	cout<<"队尾元素:"<<q.back()<<endl;
}