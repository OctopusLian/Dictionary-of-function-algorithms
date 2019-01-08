#include <stdlib.h> 
#include <stdio.h>
void main()
{
	   char *str;
	   str=(char*)malloc(40);
	   if( str==NULL )
	   {
		   printf("内存空间分配失败!\n");
		   exit(-1);
	   }
	   printf("请输入一个字符串:\n");
	   gets(str);
	   puts(str);
	   free(str);
}
