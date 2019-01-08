#include <iostream>
#include <vector>
using namespace std;
void main()
{
		vector<int> v1(5,20);
		vector<int> v2(10,50);
		v2=v1;
		cout<<"容器v1的大小: "<<v1.size()<<endl;
		for(vector<int>::iterator it=v1.begin();it<v1.end();it++)
			cout<<" "<<*it;
		cout<<endl;
		cout << "容器v2的大小: "<<v2.size()<<endl;
		for(it=v2.begin();it<v2.end();it++)
			cout<<" "<<*it;
		cout<<endl;
}
