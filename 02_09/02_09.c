#include<stdio.h>
#include<ctype.h>
void main()
{
	char str[]="How are you,Mr Liu!";
	int i=0,count=0;
	while(str[i]!='\0')
	{
		if(ispunct(str[i])) 
			count++;
		i++;
	}
	printf ("字符串%s包含%d个标点符号.\n",str,count);
}
