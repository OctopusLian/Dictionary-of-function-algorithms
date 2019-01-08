#include <iostream>
#include <set>
using namespace std;
void main ()
{
	int a[]={50,20,40,10,30};
	set<int> myset(a,a+5);
	cout << "集合中的元素:";
	while (!myset.empty())
	{
		cout << " " << *myset.begin();
		myset.erase(myset.begin());
	}
	cout<<endl;
	if(myset.empty())
		cout<<"集合为空!"<<endl;
}
