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
	printf ("�ַ���%s����%d��������.\n",str,count);
}
