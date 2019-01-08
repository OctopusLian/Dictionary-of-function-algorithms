#include<stdio.h>
#define N 12
int b[N+1];
int a[10];/*��ŷ������������*/
int total=0;/*���ж������*/
int checkmatrix[][3]={ {-1},{0,-1},{1,-1},
						{0,-1},{1,3,-1},{2,4,-1},
						{3,-1},{4,6,-1},{5,7,-1}};
void write(int a[])
/*��������е�����*/
{ 
	int i,j;
	for (i=0;i<3;i++)
	{ 
		for (j=0;j<3;j++)
			printf("%3d",a[3*i+j]);
		printf("\n");
	}
}
int isprime(int m)
/*�ж�m�Ƿ�������*/
{ 
	int i;
	int primes[]={2,3,5,7,11,17,19,23,29,-1};
	if(m==1||m%2==0) 
		return 0;
	for(i=0;primes[i]>0;i++)
		if (m==primes[i])
			return 1;
	for (i=3;i*i<=m;)
	{ 
		if (m%i==0) 
			return 0;
		i+=2;
	}
	return 1;
}
int selectnum(int start)
/*��start��ʼѡ��û��ʹ�ù�������*/
{ 
	int j;
	for (j=start;j<=N;j++)
		if (b[j]) 
			return j;
	return 0;
}
int check(int pos)
/*��������posλ���Ƿ����*/
{ 
	int i,j;
	if(pos<0) 
		return 0;
	/*�ж����ڵ��������Ƿ�������*/
	for(i=0;(j=checkmatrix[pos][i])>=0;i++)
		if(!isprime(a[pos]+a[j]))
			return 0;
	return 1;
}
int extend(int pos)
/*Ϊ��һ��������һ����û��ʹ�ù�������*/
{
	a[++pos]=selectnum(1);
	b[a[pos]]=0;
	return pos;
}
int change(int pos)
/*�������������Ϊ��ǰ����Ѱ����һ����û���õ�����*/
{ 
	int j;
	/*�������������ʹ�ã������*/
	while (pos>=0&&(j=selectnum(a[pos]+1))==0)
		b[a[pos--]]=1;
	if (pos<0)
		return -1;
	b[a[pos]]=1;
	a[pos]=j;
	b[j]=0;
	return pos;
}
void find()
/*����*/
{ 
	int ok=0,pos=0;
	a[pos]=1;
	b[a[pos]]=0;
	do
	{
		if (ok)
			if (pos==8)
			{ 
				total++;
				printf("��%d���\n",total);
				write(a);
				pos=change(pos);/*����*/
			}
			else 
				pos=extend(pos);/*��չ*/
		else 
			pos=change(pos);/*����*/
		ok=check(pos);/*���*/
	} while (pos>=0);
}
void main()
{ 
	int i;
	for (i=1;i<=N;i++)
		b[i]=1;
	find();
	printf("����%d���\n",total);
}