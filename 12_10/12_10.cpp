#include<iostream>
#include<vector>
using namespace std;
void main()
{
	vector<int> v(10);  
	int i,t;
	vector<int>::size_type n=v.size();
	for(i=0;i<n;i++)
		v.at(i)=i+1;
	cout<<"容器中的元素:"<<endl;
	for(i=0;i<n;i++)
		cout<<" "<<v.at(i);
	cout<<endl;
	cout<<"逆置后容器中的元素:"<<endl;
	for(i=0;i<n/2;i++)
	{
		t=v.at(i);
		v.at(i)=v.at(n-i-1);
		v.at(n-i-1)=t;
	}
	for(i=0;i<n;i++)
		cout<<" "<<v.at(i);
	cout<<endl;
}