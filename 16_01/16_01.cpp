#include <iostream>
#include <queue>
using namespace std;
void main ()
{
	queue<int> q;  
	q.push(10);
	q.push(20);
	q.push(30);
	cout<<"��ͷԪ��:"<<q.front()<<endl;
	cout<<"��βԪ��:"<<q.back()<<endl;
}