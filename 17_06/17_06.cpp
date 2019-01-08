#include <iostream>
#include <set>
using namespace std;
void main ()
{
	int i;
	set<int> myset;
	if (myset.max_size()>2000)
	{
		for (i=0; i<2000; i++) 
			myset.insert(i);
		cout << "集合能容纳2000个整型数据.\n";
	}
	else 
		cout << "集合不能容纳2000个整型数据.\n";
	cout<<"集合的实际元素个数:"<<myset.size()<<endl;
}
