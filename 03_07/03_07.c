#include <stdio.h>
#include <string.h>
void main ()
{
	char s1[]= "tsinghua",s2[]="peking";
	char d1[30],d2[30],d3[30];
	/*��Ϊ8<=s1�ĳ��ȣ�����strncpy������������Ŀ��ַ�*/
	strncpy (d1,s1,8);
	printf("d1:%s\n",d1);	/*����ӽ�����־��������*/
	strncpy (d1,s1,8);
	d1[8]='\0';				/*��ӽ�����־*/
	printf("d2:%s\n",d1);	/*��ӽ�����־���������*/
	/*10����s2�ĳ��ȣ�����Ҫ��ӿ��ַ�*/
	strncpy(d3,s2,10);
	printf("d3:%s\n",d3);
}
