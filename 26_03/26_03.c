#include<stdio.h>
#define N 20
void main()
{
	int i,j,a[N][N],n,k;
	printf("���������Ľ�n= ");
	scanf("%d",&n);
	k=1;
	/*��������ǣ�ǰn��б�У�*/
	for(i=1;i<=n;i++)
		for(j=1;j<=i;j++) 
		{
			if(i%2==0)  
				a[i+1-j][j]=k; 
			else        
				a[j][i+1-j]=k;           
			k++;
		}
		/*��������ǣ���n-1��б�У�*/
		for(i=n+1;i<2*n;i++)
			for(j=1;j<=2*n-i;j++)
			{
				if(i%2==0)  
					a[n+1-j][i-n+j]=k;  
				else       
					a[i-n+j][n+1-j]=k;        
				k++;
			}
			printf("********���η���********\n");
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++) 
					printf("%4d",a[i][j]);
				printf("\n");
			}
}
