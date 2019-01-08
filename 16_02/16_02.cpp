#include <iostream>
#include <queue>
using namespace std;
void main ()
{
	queue<int> Q;
	int sum=0;
	for (int i=1;i<=10;i++) 
		Q.push(i);
	cout<<"队列中的元素:"<<endl;
	while (!Q.empty())
	{
		sum += Q.front();
		cout<<" "<<Q.front();
		Q.pop();
	}
	cout<<"\n队列中的元素之和: "<< sum << endl;
}