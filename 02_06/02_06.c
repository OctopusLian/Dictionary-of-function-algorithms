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
			printf("'%c'��СдӢ����ĸ.\n",c);
		else
			printf("'%c'����СдӢ����ĸ.\n",c);
		i++;
	}
}
