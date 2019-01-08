#include<stdio.h>
#include<ctype.h>
void main()
{
	char str[]="2%3a5S";
	int i;
	for(i=0;str[i]!='\0';i++)
		if(isdigit(str[i]))
			printf ("'%c'是数字字符.\n",str[i]);
		else
			printf ("'%c'不是数字字符.\n",str[i]);
}
