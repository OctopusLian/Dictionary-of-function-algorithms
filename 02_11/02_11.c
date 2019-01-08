#include <stdio.h>
#include <ctype.h>
void main()
{
	char str[3][10]={"2FE9H","3EC7","X48A"};
	int i,k,len;
	for(k=0;k<3;k++)
	{
		len=strlen(str[k]);
		for(i=0;str[i]!='\0';)
			if(isxdigit(str[k][i]))
				i++;
			else
				break;
			if(i>=len)
				printf("%s是十六进制对应的字符\n",str[k]);
			else
				printf("%s不是十六进制对应的字符\n",str[k]);
	}
}
