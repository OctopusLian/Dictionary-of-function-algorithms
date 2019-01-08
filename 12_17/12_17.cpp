#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<int> v;
	int i,a[]={100,200,300,400,500};
	for(i=1;i<8;i++)
		v.push_back(i*10);
	cout<<"容器中的元素:";
	for(i=0;i<v.size();i++) 
		cout<<" "<<v[i];
	cout<<endl;
	v.clear();
	for(i=1;i<=3;i++)
		v.push_back(a[i]);
	cout <<"容器中的元素:";
	for(i=0; i<v.size(); i++) 
		cout <<" "<<v[i];
	cout<<endl;
}