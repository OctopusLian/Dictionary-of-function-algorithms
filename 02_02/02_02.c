#include<stdio.h>
#include<ctype.h>
void main() 
{ 
	int c; 
	c='x'; 
	printf("%c:%s\n",c,isalpha(c)?"��Ӣ����ĸ":"����Ӣ����ĸ"); 
	c='6'; 
	printf("%c:%s\n",c,isalpha(c)?"��Ӣ����ĸ":"����Ӣ����ĸ"); 
	c='&'; 
	printf("%c:%s\n",c,isalpha(c)?"��Ӣ����ĸ":"����Ӣ����ĸ"); 
}
