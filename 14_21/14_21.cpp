#include <iostream>
#include <list>
#include <string>
using namespace std;
//��������LISTSTR
typedef list<string, allocator<string> > LISTSTR;
void main()
{
	LISTSTR test;
	LISTSTR::iterator it;
	//��ʼ��test
	test.push_back("visual");
	test.push_back("basic");
	test.push_back("c++");
	test.push_back("foxpro");
	//���test�е�Ԫ��
	cout<<"�����е�Ԫ��:";
	for (it = test.begin(); it != test.end(); ++it)
		cout << *it << " ";
	cout << endl;
	//�Ƴ�c++
	test.remove("c++");
	//����Ƴ����Ԫ��
	cout<<"�����е�Ԫ��:";
	for (it = test.begin(); it != test.end(); ++it)
		cout << *it << " ";
	cout << endl;
	//�Ƴ�������basic��Ԫ��
	test.remove_if(binder2nd<not_equal_to<string> >
  		(not_equal_to<string>(), "basic"));
	//���test�е�Ԫ��
	cout<<"�����е�Ԫ��:";
	for (it = test.begin(); it != test.end(); ++it)
		cout << *it << " ";
	cout << endl;
}