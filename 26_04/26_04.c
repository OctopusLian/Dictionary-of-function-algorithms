#include <stdio.h>
#define N 20
void main()
{
	int i,j,n,k=1,a[N][N];
	printf("������һ��������(1��N��20):");
	scanf("%d",&n);
	printf("********����������********\n");
	for(i=0;i<=n/2;i++)		/*����Ȧ��*/
	{
		for(j=i;j<n-i;j++)		/*�Ϸ�Ԫ��*/
			a[i][j]=k++;
		for(j=i+1;j<n-i;j++)	/*�ҷ�Ԫ��*/
			a[j][n-i-1]=k++;
		for(j=n-i-2;j>i;j--)	/*�·�Ԫ��*/
			a[n-i-1][j]=k++;
		for(j=n-i-1;j>i;j--)	/*��Ԫ��*/
			a[j][i]=k++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
}
