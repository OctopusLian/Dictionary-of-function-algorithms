#include <iostream>
#include <queue>
using namespace std;
void main ()
{
	queue<int> Q;
	cout << "队列中的元素个数: "<<Q.size()<<endl;
	for (int i=0; i<10; i++) 
		Q.push(i);
	cout << "队列中的元素个数: "<<Q.size()<<endl;
}