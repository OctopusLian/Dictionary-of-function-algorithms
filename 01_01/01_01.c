#include <stdio.h>
void main()
{
	char ch;
	printf("请输入一个文本串:");
	do 
	{
		ch=getchar();
		putchar(ch);
	}while(ch!='\n');
}
