#include <iostream> 
using namespace std; 
void main() 
{ 
	char str[80]; 
	cout<<"������һ���ַ���:"<<endl;
	cin.ignore(256,','); 
	cin.getline(str,80); 
	cout<<"�����ַ�','ǰ���ַ���:"<<endl<<str<<endl;
}
