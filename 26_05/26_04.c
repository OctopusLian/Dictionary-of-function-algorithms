#include <stdio.h>
#define N 20    
void CreateArray(int a[N][N],int n); 
void OutPut(int a[N][N],int n);
void main()
{
	int n,a[N][N];
	printf("请输入一个正整数n(1<n<20):");
	scanf("%d",&n);			/*输入外螺旋矩阵阶数*/
	CreateArray(a,n);		/*调用构造外螺旋矩阵函数*/
	printf("********外螺旋矩阵: ********\n");
	OutPut(a,n);			/*调用输出函数*/
}
void CreateArray(int a[N][N],int n) 
/*创建外螺旋矩阵*/
{
	int p,i,j,k;                     
	p=n*n;                             
	for(k=1;k<=n/2;k++)		/*控制圈数*/
	{
		for(j=k;j<=n-k;j++)
			a[k][j]=p--;		/*生成上半部矩阵元素*/
		for(i=k;i<=n-k;i++)
			a[i][n-k+1]=p--;	/*生成右半部矩阵元素*/
		for(j=n-k+1;j>k;j--)
			a[n-k+1][j]=p--;	/*生成下半部矩阵元素*/
		for(i=n-k+1;i>k;i--)
			a[i][k]=p--;		/*生成左半部矩阵元素*/
	}
	if(n%2!=0)
		a[n/2+1][n/2+1]=1;
}
void OutPut(int a[N][N],int n)               
/*定义输出函数*/
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
}
