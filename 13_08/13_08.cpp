#include <iostream>
#include <deque>
using namespace std;
void main()
{
	deque<int> d; 
	int i,j,t,a[]={25,13,89,57,633,21,9,88},n;
	n=sizeof(a)/sizeof(a[0]);
	d.resize(n);
	for(i=0;i<n;i++) 
		d[i]=a[i];
	cout<<"容器中的元素:"<<endl;
	for(i=0;i<n;i++)
		cout<<" "<<d[i];
	cout<<endl;
	cout<<"排序后容器中的元素:"<<endl;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(d[i]<d[j])
			{
				t=d[i];
				d[i]=d[j];
				d[j]=t;
			}
		}
	for(i=0;i<n;i++)
		cout<<" "<<d[i];
	cout<<endl;
}
