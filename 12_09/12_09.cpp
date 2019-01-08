#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<int> v; 
	int i,j,t,n;
	int a[]={23,45,9,3,55,99,56,121,28};
	n=sizeof(a)/sizeof(a[0]);
	v.resize(n);
	for(i=0;i<n;i++) 
		v[i]=a[i];
	cout<<"容器中的元素:"<<endl;
	for(i=0;i<n;i++)
		cout<<" "<<v[i];
	cout<<endl;
	for(i=0; i<n; i++)
		for(j=i+1; j<n; j++)
			if(v[i]<v[j])
			{
				t=v[i];
				v[i]=v[j];
				v[j]=t;
			}
	cout<<"降序排列后容器中的元素:"<<endl;
	for(i=0;i<n;i++)
		cout<<" "<<v[i];
	cout<<endl;
}