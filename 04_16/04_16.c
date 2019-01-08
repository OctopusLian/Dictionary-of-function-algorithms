#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n;
	printf ("检查处理器是否可用...");
	if (system(NULL)) 
		printf("处理器可用!\n");
	else 
		exit(-1);
	printf ("执行ipconfig命令...\n");
	n=system ("ipconfig");
	printf ("函数返回值是: %d.\n",n);
}
