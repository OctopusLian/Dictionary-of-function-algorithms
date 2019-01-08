#include <iostream>
#include <deque>
using namespace std;
void main()
{
	int i;
	deque<int> d1;                           
	deque<char> d2(5,'a');                      
	deque<char> d3(d2.begin()+1,d2.end()); 
	deque<char> d4(d3);  
	if(d1.empty())
		cout << "ÈÝÆ÷d1Îª¿Õ:"<<endl;
	cout<<"ÈÝÆ÷d2µÄÔªËØ:";
	for (i=0;i<d2.size();i++)
		cout << " " <<d2[i];
	cout<<"\nÈÝÆ÷d3µÄÔªËØ:";
	for (i=0;i<d3.size();i++)
		cout << " " <<d3[i];
    cout<<"\nÈÝÆ÷d4µÄÔªËØ:";
	for (i=0;i<d4.size();i++)
		cout << " " <<d4[i];
	cout << endl;
}