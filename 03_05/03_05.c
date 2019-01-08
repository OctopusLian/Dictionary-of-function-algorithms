#include<stdio.h>
void main()
{
	char str1[80],str2[80];
	strcpy(str1,"Visual C++ 6.0");
	memmove(str2,str1,80);
	puts("destination string:");
	puts(str2);
}
