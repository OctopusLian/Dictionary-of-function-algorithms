#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n;
	printf ("��鴦�����Ƿ����...");
	if (system(NULL)) 
		printf("����������!\n");
	else 
		exit(-1);
	printf ("ִ��ipconfig����...\n");
	n=system ("ipconfig");
	printf ("��������ֵ��: %d.\n",n);
}
