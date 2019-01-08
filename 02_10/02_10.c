#include<stdio.h>
#include<ctype.h>
void main()
{
	char str[]="LiLin come from Beijing!\n";
	int c,i=0;
	for(;str[i]!='\0';)
	{
		c=str[i];
		if(isspace(c)) 
			c='\n';
		putchar(c);
		i++;
	}
}
