#include<stdio.h>
#define N 20
void main()
{
	int a[N][N],i,j,t,p=1,n;
	printf("���������Ľ�:");
	scanf("%d",&n);
	printf("------��תǰ�ľ���------\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			a[i][j]=p++;
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("----˳ʱ����ת��ľ���----\n");
	for(i=1;i<=n/2;i++)
		for(j=i;j<n-i+1;j++)
		{
			t=a[i][j];
			a[i][j]=a[n-j+1][i];
			a[n-j+1][i]=a[n-i+1][n-j+1];
			a[n-i+1][n-j+1]=a[j][n-i+1];
			a[j][n-i+1]=t;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				printf("%4d",a[i][j]);
			printf("\n");
		}
}
