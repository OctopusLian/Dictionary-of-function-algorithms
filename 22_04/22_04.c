#include<stdio.h>
void DectoBin(int num);
void main()
{
	int n;
	printf("������һ��ʮ��������:");
	scanf("%d",&n);
	printf("����������:");
	DectoBin(n);
	printf("\n");
}
void DectoBin(int num)
{
	if(num==0)
		return;
	else
	{
		DectoBin(num/2);
		printf("%d",num%2);
	}
}