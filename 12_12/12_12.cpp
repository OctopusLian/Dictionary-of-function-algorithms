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
	cout<<"����v1�Ĵ�С: "<<v1.size()<<endl;
	cout<<"����v1�е�Ԫ��: "<<endl;
	for(i=0;i<v1.size();i++)
		cout<<" "<<v1.at(i);
	cout<<endl;
	cout<<"����v2�Ĵ�С: "<<v2.size()<<endl;
	cout<<"����v2�е�Ԫ��: "<<endl;
	for(i=0;i<v2.size();i++)
		cout<<" "<<v2.at(i);
	cout<<endl;
	cout<<"����v3�Ĵ�С: "<<v3.size()<<endl;
	cout<<"����v3�е�Ԫ��: "<<endl;
	for(i=0;i<v3.size();i++)
		cout<<" "<<v3.at(i);
	cout<<endl;
}