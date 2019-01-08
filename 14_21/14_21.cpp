#include <iostream>
#include <list>
#include <string>
using namespace std;
//定义类型LISTSTR
typedef list<string, allocator<string> > LISTSTR;
void main()
{
	LISTSTR test;
	LISTSTR::iterator it;
	//初始化test
	test.push_back("visual");
	test.push_back("basic");
	test.push_back("c++");
	test.push_back("foxpro");
	//输出test中的元素
	cout<<"容器中的元素:";
	for (it = test.begin(); it != test.end(); ++it)
		cout << *it << " ";
	cout << endl;
	//移除c++
	test.remove("c++");
	//输出移除后的元素
	cout<<"容器中的元素:";
	for (it = test.begin(); it != test.end(); ++it)
		cout << *it << " ";
	cout << endl;
	//移除不等于basic的元素
	test.remove_if(binder2nd<not_equal_to<string> >
  		(not_equal_to<string>(), "basic"));
	//输出test中的元素
	cout<<"容器中的元素:";
	for (it = test.begin(); it != test.end(); ++it)
		cout << *it << " ";
	cout << endl;
}