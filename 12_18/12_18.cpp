#include <iostream>
#include <vector>
using namespace std;
void main ()
{
    int i;
	vector<int> v1;   
	vector<int> v2; 
	for(i=0;i<10;i++)
		v1.push_back(i+1);
	for(i=0;i<6;i++)
		v2.push_back((i+1)*10);
	cout<<"����ǰ��v1�е�Ԫ��:";
	for(i=0;i<v1.size();i++)
		cout<<" "<<v1[i];
	cout<<"\n����ǰ��v2�е�Ԫ��:";
	for(i=0;i<v2.size();i++)
		cout<<" "<<v2[i];
	v1.swap(v2);
	cout<<"\n������v1�е�Ԫ��:";
	for(i=0;i<v1.size();i++)
		cout<<" "<<v1[i];
	cout<<"\n������v2�е�Ԫ��:";
	for(i=0;i<v2.size();i++)
		cout<<" "<<v2[i];
	cout<<endl;
}