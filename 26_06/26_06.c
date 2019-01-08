#include <stdio.h>
#define N 100    
void CreateArray(int a[N][N],int n);                      
void OutPut(int s[N][N],int n);
void main()
{
	int n,a[N][N];
	printf("请输入一个正整数n(1<n<100):");
	scanf("%d",&n); 			/*输入螺旋矩阵阶数*/
	CreateArray(a,n);			/*调用数组函数*/
	printf("********逆螺旋矩阵: ********\n");
	OutPut(a,n);				/*调用输出函数*/
}
void CreateArray(int a[N][N],int n)                
/*创建逆螺旋矩阵*/
{
	int p,i,j,k,m;
	m=(n+1)/2;					/*求螺旋矩阵圈数*/
	p=1; 
	for(k=0;k<m;k++) 			/*用循环控制产生的圈数*/
	{
		for(i=k;i<n-k;i++)
			a[i][k]=p++;		/*生成左半部矩阵元素*/
		for(j=k+1;j<n-k;j++)
			a[n-k-1][j]=p++;	/*生成下半部矩阵元素*/
		for(i=n-k-2;i>=k;i--)
			a[i][n-k-1]=p++;	/*生成右半部矩阵元素*/
		for(j=n-k-2;j>k;j--)
			a[k][j]=p++;		/*生成上半部矩阵元素*/
	}
}
void OutPut(int s[N][N],int n)               
/*定义输出函数*/
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%4d",s[i][j]);
		printf("\n");
	}
}
