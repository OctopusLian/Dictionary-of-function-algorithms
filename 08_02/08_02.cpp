#include <iostream>
using namespace std;
void main() 
{
	ios_base::fmtflags ff;
	cout.setf(ios_base::right,ios_base::adjustfield);
	cout.width(10);
	cout <<'a'<<endl;
	ff = cout.flags();
	ff &= ~cout.basefield;  
	ff |= cout.hex;      
	ff |= cout.showbase;  
	cout.flags(ff);
	cout <<100<<endl;	
	cout.unsetf(ios_base::showbase); 
	cout <<100<<endl;	
}
