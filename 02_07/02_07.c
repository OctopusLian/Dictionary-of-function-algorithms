#include<stdio.h>
#include<ctype.h>
void main()
{
	int i=0;
	char str[]="Northwest University.\n";
	char c;
	while (str[i])
	{
		c=str[i];
		if (isupper(c)) 
			c=tolower(c);
		putchar (c);
		i++;
	}
}
