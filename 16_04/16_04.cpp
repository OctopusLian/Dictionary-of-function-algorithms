#include <iostream>
#include <queue>
using namespace std;
void main ()
{
	queue<int> Q;
	for(int i=0;i<=5;i++)//�����е�Ԫ��������50,51,52,53,54
		Q.push(i+50);
	cout<<"��ͷԪ��:"<<Q.front()<<endl;
	Q.pop();
	cout<<"��ͷԪ��:"<<Q.front()<<endl;
}