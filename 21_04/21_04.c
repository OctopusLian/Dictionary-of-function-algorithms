#include<stdio.h>
void main()
{
	int n;
	printf("������һ��������:");
	scanf("%d",&n);
	printf("�ǹȲ�������е�ÿһ����:\n%d",n);
	while(n!=1)
	{
		if(n%2==0)
		{
			n/=2;
			printf("->%d",n);
		}
		else
		{
			n=n*3+1;
			printf("->%d",n);
		}
	}
	printf("\n");
}
