#include <stdio.h>
#include <stdlib.h>
void main()
{
	char ch;
	printf("请输入一个字符('q'表示退出):");
	scanf("%c%*c",&ch);
	while(1)
	{
		if( toupper( ch )=='Q' )
		{
			printf("程序退出.\n");
			exit(0);
		}
		printf("你输入的字符是%c\n",ch);
		printf("请输入一个字符('q'表示退出):");
		scanf("%c%*c",&ch);
	}
}
