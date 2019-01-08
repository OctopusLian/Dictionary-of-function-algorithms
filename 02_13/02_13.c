#include <stdio.h>
#include <ctype.h>
void main()
{
	char str[]="Hello,C Program Language.\nWelcome to C Language World!\n",c;
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		c=str[i];
		putchar(toupper(c));
	}
}
