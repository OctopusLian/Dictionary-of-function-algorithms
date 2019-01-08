#include<stdio.h>
#include<ctype.h>
void main()
{
	int i=0;
	char str[]="Welcome to you!\nWelcome to Beijing!\n";
	while(str[i]!='\0')
	{
		if(isprint(str[i]))
			putchar(str[i]);
		i++;
	}
	printf("\n");
}
