#include<stdio.h>
#include<ctype.h>
void main()
{
	int i=0;
	char str[]="Test String.";
	char c;
	while(str[i])
	{
		c=str[i];
		if(islower(c)) 
			printf("'%c'是小写英文字母.\n",c);
		else
			printf("'%c'不是小写英文字母.\n",c);
		i++;
	}
}
