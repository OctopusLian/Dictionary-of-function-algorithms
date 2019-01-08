#include <iostream>
#include <list>
using namespace std;
void main ()
{
  list<char> L1 (5,'A');   
  list<char> L2;  
  list<char>::iterator it;
  for(int i=1;i<9;i++)
	  L2.push_back('A'+i);
  cout<<"½»»»Ç°:"<<endl;
  cout<<"ÈÝÆ÷L1:";
  for (it=L1.begin(); it!=L1.end(); it++) 
	  cout << " " << *it;
  cout << "\nÈÝÆ÷L2:";
  for (it=L2.begin(); it!=L2.end(); it++) 
	  cout << " " << *it;
  cout << endl;
  L1.swap(L2);
 cout<<"½»»»ºó:"<<endl;
  cout<<"ÈÝÆ÷L1:";
  for (it=L1.begin(); it!=L1.end(); it++) 
	  cout << " " << *it;
  cout << "\nÈÝÆ÷L2:";
  for (it=L2.begin(); it!=L2.end(); it++) 
	  cout << " " << *it;
  cout << endl;
}