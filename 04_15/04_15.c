#include <stdio.h>
#include <stdlib.h>
void main()
{
	char ch;
	printf("������һ���ַ�('q'��ʾ�˳�):");
	scanf("%c%*c",&ch);
	while(1)
	{
		if( toupper( ch )=='Q' )
		{
			printf("�����˳�.\n");
			exit(0);
		}
		printf("��������ַ���%c\n",ch);
		printf("������һ���ַ�('q'��ʾ�˳�):");
		scanf("%c%*c",&ch);
	}
}
