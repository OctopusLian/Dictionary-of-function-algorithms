#include <iostream>
#include <deque>
using namespace std;
void main()
{
	deque<char> d(10);  
	int i;
	for (i=0; i<d.size(); i++)
		d.at(i)=i+'A';
	cout << "�����е�Ԫ��:";
	//��������е�Ԫ�أ���ȷ!
	for (i=0; i<d.size(); i++)
		cout << " " << d.at(i);
	cout << endl;
    //����[]��������е�Ԫ�أ�Խ��ʱ������Խ����!
	for (i=0; i<=d.size(); i++)
		cout << " " << d[i];
	cout << endl;
	//����at������������е�Ԫ�أ�Խ��ʱ����һ���쳣����!
    for (i=0; i<=d.size(); i++)
		cout << " " << d.at(i);
	cout << endl;
}