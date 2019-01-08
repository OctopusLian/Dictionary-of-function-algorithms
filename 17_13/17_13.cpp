#include <iostream>
#include <set>
using namespace std;

void main ()
{

	int a[]={1,11,22,33,44,55,66,77,88,99};
	set<int> myset(a,a+10);	//初始化集合:1,11,22,33,44,55,66,77,88,99
	set<int>::iterator it,low,up;
	cout<<"集合中的元素:"<<endl;
	for(it=myset.begin();it!=myset.end();it++)
		cout<<"  "<<*it;
	cout<<endl;
	low=myset.lower_bound (40); //low指向44
	cout<<"low指向:"<<*low<<endl;
	up=myset.upper_bound (80); //up指向88
	cout<<"up指向:"<<*up<<endl;
	myset.erase(low,up);       //删除44 55 66 77
	cout << "集合中的元素:";
	for (it=myset.begin(); it!=myset.end(); it++)
		cout << "  " << *it;
	cout << endl;
}