#include <iostream>
#include <vector>
using namespace std;
void DispElem(vector<int> v)
{
	vector<int>::iterator it;
	cout<<"容器中的元素:";
	for(it=v.begin();it<v.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}
void main()
{
	vector<int> v(2,50);
	vector<int>::iterator it;
	int a[]={1,2,3};
	for(int i=0;i<10;i++)
		v.push_back(i+1);
	DispElem(v);
	it=v.begin();
	it=v.insert(it,99);
	cout<<"插入的元素是:"<<*it<<endl;
	DispElem(v);
	v.insert(it,2,10);
	DispElem(v);
	it=v.begin();
	vector<int> v2(2,6);
	v.insert(it+1,v2.begin(),v2.end());
	DispElem(v);
	v.insert(v.begin(),a,a+3);
	DispElem(v);	
}