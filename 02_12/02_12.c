#include <stdio.h>
#include <ctype.h>
void main()
{
	char str[]="the People's Republic of China.\n",c;
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		c=str[i];
		putchar(tolower(c));
	}
}
