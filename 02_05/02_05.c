#include<stdio.h>
#include<ctype.h>
void main ()
{
	char ch;
	while(1)
	{
		printf("������һ���ַ�(�˳�������'q'):");
		ch=getchar();
		getchar();
		if(isgraph(ch))
			printf("'%c'�ǿɴ�ӡ�ַ�.\n",ch);
		else
			printf("'%c'���ǿɴ�ӡ�ַ�.\n",ch);
		if(ch=='q')
			break;
	}
}
