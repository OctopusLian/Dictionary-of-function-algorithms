#include<stdio.h>
int gcd(int m,int n);
void main()
{
	int m,n;
	printf("����������������:");
	scanf("%d,%d",&m,&n);
	printf("���Լ����:%d\n",gcd(m,n));
}
int gcd(int m,int n)
{
	if(m>n)
		return gcd(m-n,n);
	else if(m<n)
		return gcd(m,n-m);
	else
		return m;
}