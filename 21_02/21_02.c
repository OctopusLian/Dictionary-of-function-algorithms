#include<stdio.h>
void main()
{
	int i,n,x,a[16];
	printf("������һ��ʮ��������:");
	scanf("%d",&x);
	n=1;
	while(x!=0)
	{
		a[n]=x%2;
		x=x/2;
		n++;
	}
	printf("����������:");
	for(i=n-1;i>=1;i--)
		printf("%d",a[i]);
	printf("\n");
}