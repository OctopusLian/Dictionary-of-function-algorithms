#include<stdio.h>
#include<ctype.h>
void main ()
{
	char ch;
	while(1)
	{
		printf("请输入一个字符(退出请输入'q'):");
		ch=getchar();
		getchar();
		if(isgraph(ch))
			printf("'%c'是可打印字符.\n",ch);
		else
			printf("'%c'不是可打印字符.\n",ch);
		if(ch=='q')
			break;
	}
}
