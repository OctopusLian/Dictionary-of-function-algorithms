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
	cout<<"交换前，v1中的元素:";
	for(i=0;i<v1.size();i++)
		cout<<" "<<v1[i];
	cout<<"\n交换前，v2中的元素:";
	for(i=0;i<v2.size();i++)
		cout<<" "<<v2[i];
	v1.swap(v2);
	cout<<"\n交换后，v1中的元素:";
	for(i=0;i<v1.size();i++)
		cout<<" "<<v1[i];
	cout<<"\n交换后，v2中的元素:";
	for(i=0;i<v2.size();i++)
		cout<<" "<<v2[i];
	cout<<endl;
}