#include<stdio.h> 
void main() 
{ 
	int a[16],m,m0,x=2,i=0,j;
	printf("������һ�����ֽ������:");
	scanf("%d",&m0);
	m=m0;
	while(m!=1)
	{
		while(m%x==0)
		{
			i++;
			a[i]=x;
			m=m/x;
		}
		x=x+1;
	}
	printf("��ʽ�ֽ�:%d=",m0); 
	for(j=1;j<i;j++)
		printf("%d*",a[j]);
	printf("%d",a[i]);
	printf("\n");
}
