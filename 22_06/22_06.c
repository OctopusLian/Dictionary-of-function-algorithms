#include<stdio.h>
int RevStr(char s[],int i);
void main()
{
	char s[]="Welcome to Northwest University!";
	printf("�ߵ�ǰ:%s\n",s);
	RevStr(s,0);
	printf("�ߵ���:%s\n",s);
}
int RevStr(char s[],int i)
{
	int k;
	char ch=s[i];
	if(ch=='\0')
		return 0;
	else
	{
		k=RevStr(s,i+1);
		s[k]=ch;
		return k+1;
	}
}