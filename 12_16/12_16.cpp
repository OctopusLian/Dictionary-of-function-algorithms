#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<int> v;
	int i;
	v.resize(10);
	for(i=0;i<8;i++) 
		v.at(i)=i+1;
	cout<<"�����е�Ԫ��:"<<endl;
	vector<int>::iterator it;
	for(it=v.begin();it<v.end();it++) 
		cout<<" "<<*it;
	cout<<endl;
	v.erase(v.begin()+3);
	v.erase(v.begin()+3,v.end()-3);
	cout<<"ɾ������Ԫ�غ�,�����е�Ԫ��:"<<endl;
	for(i=0; i<v.size();i++)
		cout <<" "<< v[i];
	cout<<endl;
}
