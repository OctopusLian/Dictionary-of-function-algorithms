#include <iostream>
#include <vector>
using namespace std;
void main ()
{
	vector<int> v1;
	vector<int> v2;
	vector<int> v3; 
	int i;
	v1.assign(8,100);  
	v2.assign(v1.begin(),v1.end()-1); 
	int a[]={256,512,1024,4096};
	v3.assign(a,a+4); 
	cout<<"容器v1的大小: "<<v1.size()<<endl;
	cout<<"容器v1中的元素: "<<endl;
	for(i=0;i<v1.size();i++)
		cout<<" "<<v1.at(i);
	cout<<endl;
	cout<<"容器v2的大小: "<<v2.size()<<endl;
	cout<<"容器v2中的元素: "<<endl;
	for(i=0;i<v2.size();i++)
		cout<<" "<<v2.at(i);
	cout<<endl;
	cout<<"容器v3的大小: "<<v3.size()<<endl;
	cout<<"容器v3中的元素: "<<endl;
	for(i=0;i<v3.size();i++)
		cout<<" "<<v3.at(i);
	cout<<endl;
}