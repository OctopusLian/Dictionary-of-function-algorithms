#include <stdlib.h>  
#include <stdio.h>
#include <malloc.h>
void main()
{
	char *str;
	str=(char*)malloc(20);
	if( str==NULL )
	{
		printf( "内存分配失败!\n" );
		exit(-1);
	}
	else
	{
		printf( "请输入一个字符串:\n" );
		gets(str);
	}
	printf("释放内存单元...\n");
	free(str);
	printf("释放内存单元后：\n");
	puts(str);
}
