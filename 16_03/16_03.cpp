#include <iostream>
#include <queue>
using namespace std;
void main ()
{
	queue<int> Q;
	cout << "�����е�Ԫ�ظ���: "<<Q.size()<<endl;
	for (int i=0; i<10; i++) 
		Q.push(i);
	cout << "�����е�Ԫ�ظ���: "<<Q.size()<<endl;
}