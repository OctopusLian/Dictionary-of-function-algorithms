#include <stdio.h>
#define N 100    
void CreateArray(int a[N][N],int n);                      
void OutPut(int s[N][N],int n);
void main()
{
	int n,a[N][N];
	printf("������һ��������n(1<n<100):");
	scanf("%d",&n); 			/*���������������*/
	CreateArray(a,n);			/*�������麯��*/
	printf("********����������: ********\n");
	OutPut(a,n);				/*�����������*/
}
void CreateArray(int a[N][N],int n)                
/*��������������*/
{
	int p,i,j,k,m;
	m=(n+1)/2;					/*����������Ȧ��*/
	p=1; 
	for(k=0;k<m;k++) 			/*��ѭ�����Ʋ�����Ȧ��*/
	{
		for(i=k;i<n-k;i++)
			a[i][k]=p++;		/*������벿����Ԫ��*/
		for(j=k+1;j<n-k;j++)
			a[n-k-1][j]=p++;	/*�����°벿����Ԫ��*/
		for(i=n-k-2;i>=k;i--)
			a[i][n-k-1]=p++;	/*�����Ұ벿����Ԫ��*/
		for(j=n-k-2;j>k;j--)
			a[k][j]=p++;		/*�����ϰ벿����Ԫ��*/
	}
}
void OutPut(int s[N][N],int n)               
/*�����������*/
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%4d",s[i][j]);
		printf("\n");
	}
}
