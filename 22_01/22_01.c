#include<stdio.h>
long int Fact(int n);
void main()
{
	int n;
	printf("������һ������:");
	scanf("%d",&n);
	printf("%d!=%d\n",n,Fact(n));
}
long int Fact(int n)
{	
	int x;
	long int y;	
	if(n < 0)                  	/*n<0ʱ�׳��޶���*/
	{
		printf("������!");
		return -1;	    
	}
	if(n == 0)					/*n==0ʱ�׳�Ϊ1*/
		return 1;
	else  
	{
		return n*Fact(n - 1);		/*�ݹ���n�Ľ׳�*/
	}
}
