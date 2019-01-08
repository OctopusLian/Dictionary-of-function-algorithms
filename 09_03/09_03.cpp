#include <iostream> 
using namespace std; 
void main() 
{ 
	char str[80]; 
	cout<<"ÇëÊäÈëÒ»¸ö×Ö·û´®:"<<endl;
	cin.ignore(256,','); 
	cin.getline(str,80); 
	cout<<"ºöÂÔ×Ö·û','Ç°µÄ×Ö·ûºó:"<<endl<<str<<endl;
}
