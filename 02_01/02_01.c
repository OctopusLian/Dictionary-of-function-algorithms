#include<stdio.h>
#include<ctype.h>
void main()
{ 
	char ch1='*'; 
	char ch2='2'; 
	if(isalnum(ch1)!=0) 
		printf("'%c'��Ӣ����ĸ�������ַ�\n",ch1); 
	else 
		printf("'%c'����Ӣ����ĸҲ���������ַ�\n",ch1); 
	if(isalnum(ch2)!=0) 
		printf("'%c'��Ӣ����ĸ�������ַ�\n",ch2); 
	else 
		printf("'%c'����Ӣ����ĸ�������ַ�\n",ch2); 
}
