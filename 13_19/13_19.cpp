#include <iostream>
#include <deque>
using namespace std;
void InitDeque(deque<double> *d,double a[],int n)
{
	for(int i=0;i<n;i++)
		d->push_back(a[i]);
}
void DispDeque(deque<double> d)
{
	for (int i=0; i<d.size(); i++) 
		cout << "  " << d[i];
	cout<<endl;
}
void main ()
{
	deque<double> d1; 
	deque<double> d2;  
	double a[]={3.14,6.57,9.84,4.9,8.8,125.6,89.3};
	double b[]={1.0,2.0,3.0,4.0,5.0};
	InitDeque(&d1,a,sizeof(a)/sizeof(a[0]));//用数组a中的元素初始化d1
	InitDeque(&d2,b,sizeof(b)/sizeof(b[0]));//用数组b中的元素初始化d2
	cout << "交换前:\n";
	cout << "容器d1:";
	DispDeque(d1);
	cout << "容器d2:";
	DispDeque(d2);
	d1.swap(d2);
	cout << "交换后:\n";
	cout << "容器d1:";
	DispDeque(d1);
	cout << "容器d2:";
	DispDeque(d2);
}