#include <stdio.h>
#define N 20    
void CreateArray(int a[N][N],int n); 
void OutPut(int a[N][N],int n);
void main()
{
	int n,a[N][N];
	printf("������һ��������n(1<n<20):");
	scanf("%d",&n);			/*�����������������*/
	CreateArray(a,n);		/*���ù���������������*/
	printf("********����������: ********\n");
	OutPut(a,n);			/*�����������*/
}
void CreateArray(int a[N][N],int n) 
/*��������������*/
{
	int p,i,j,k;                     
	p=n*n;                             
	for(k=1;k<=n/2;k++)		/*����Ȧ��*/
	{
		for(j=k;j<=n-k;j++)
			a[k][j]=p--;		/*�����ϰ벿����Ԫ��*/
		for(i=k;i<=n-k;i++)
			a[i][n-k+1]=p--;	/*�����Ұ벿����Ԫ��*/
		for(j=n-k+1;j>k;j--)
			a[n-k+1][j]=p--;	/*�����°벿����Ԫ��*/
		for(i=n-k+1;i>k;i--)
			a[i][k]=p--;		/*������벿����Ԫ��*/
	}
	if(n%2!=0)
		a[n/2+1][n/2+1]=1;
}
void OutPut(int a[N][N],int n)               
/*�����������*/
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
}
