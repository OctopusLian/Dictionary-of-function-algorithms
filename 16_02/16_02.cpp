#include <iostream>
#include <queue>
using namespace std;
void main ()
{
	queue<int> Q;
	int sum=0;
	for (int i=1;i<=10;i++) 
		Q.push(i);
	cout<<"�����е�Ԫ��:"<<endl;
	while (!Q.empty())
	{
		sum += Q.front();
		cout<<" "<<Q.front();
		Q.pop();
	}
	cout<<"\n�����е�Ԫ��֮��: "<< sum << endl;
}