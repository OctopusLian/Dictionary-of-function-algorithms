#include<stdio.h>
void main()
{
	int m,n,m1,n1,r;
	printf("����������������:");
	scanf("%d,%d",&m,&n);
	m1=m;
	n1=n;
	r=m%n;
	while(r!=0)
	{
		m=n;
		n=r;
		r=m%n;
	}
	printf("%d��%d�����Լ����%d.\n",m1,n1,n);
	printf("%d��%d����С��������%d.\n",m1,n1,m1*n1/n);
}