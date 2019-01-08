#include <iostream>
#include <deque>
using namespace std;
void main()
{
	deque<char> d(10);  
	int i;
	for (i=0; i<d.size(); i++)
		d.at(i)=i+'A';
	cout << "容器中的元素:";
	//输出容器中的元素，正确!
	for (i=0; i<d.size(); i++)
		cout << " " << d.at(i);
	cout << endl;
    //利用[]输出容器中的元素，越界时不进行越界检查!
	for (i=0; i<=d.size(); i++)
		cout << " " << d[i];
	cout << endl;
	//利用at函数输出容器中的元素，越界时产生一个异常错误!
    for (i=0; i<=d.size(); i++)
		cout << " " << d.at(i);
	cout << endl;
}