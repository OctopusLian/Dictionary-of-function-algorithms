#include <stdlib.h>  
#include <stdio.h>
#include <malloc.h>
void main()
{
	char *str;
	str=(char*)malloc(20);
	if( str==NULL )
	{
		printf( "�ڴ����ʧ��!\n" );
		exit(-1);
	}
	else
	{
		printf( "������һ���ַ���:\n" );
		gets(str);
	}
	printf("�ͷ��ڴ浥Ԫ...\n");
	free(str);
	printf("�ͷ��ڴ浥Ԫ��\n");
	puts(str);
}
