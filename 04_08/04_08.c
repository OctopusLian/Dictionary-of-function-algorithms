#include <stdlib.h> 
#include <stdio.h>
void main()
{
	   char *str;
	   str=(char*)malloc(40);
	   if( str==NULL )
	   {
		   printf("�ڴ�ռ����ʧ��!\n");
		   exit(-1);
	   }
	   printf("������һ���ַ���:\n");
	   gets(str);
	   puts(str);
	   free(str);
}
