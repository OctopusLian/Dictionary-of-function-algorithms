#include<stdio.h>
#include<malloc.h>
int *w;		/*���ÿ����װ�������*/
int n;		/*��װ�����Ŀ*/
int c;		/*��һ�Ҵ��ĳ�����*/
int cw=0;	/*��ǰ������*/
int remain;	/*ʣ��������*/
int	*x;		/*�������ʱÿ����װ���Ƿ�ѡȡ*/
int bestw;	/*������ŵķ��ڵ�һ�Ҵ�������*/
int	*bestx;	/*������ŵļ�װ��ѡȡ����*/
void Backtrace(int k)
{	
	int i;
	if(k>n)	 /*�ݹ�ĳ��ڣ�����ҵ�һ����*/
	{	
		for(i=1;i<=n;i++)	/*��װ��ķ�������bestx��*/
			bestx[i]=x[i];	
		bestw=cw;			/*���µ�ǰ������װ����*/
		return;
	}
	else	
	{	
		remain-=w[k];
		if (cw+w[k]<=c) /*���װ��w[k]����С��c*/         	
		{	
			x[k]=1;		/*��װ��w[k]*/
			cw+=w[k];
			Backtrace(k+1);
			cw-=w[k];	/*��װ��w[k]*/
		}
		if (remain+cw > bestw)	/*���ʣ��ļ�װ�䲻����ȫװ��*/
		{	
			x[k]=0;	
			Backtrace(k+1);		/*������ʣ��ļ�װ���м���Ƿ���װ��*/
		}
		remain+=w[k];		/*w[k]���³�Ϊ��װ��ļ�װ��*/
	}
}
int BestSoution(int *w,int n,int c)
/*�������ŵ�װ�ط���:w���ÿ����װ�������,
  n��ʾ��װ����Ŀ,c��ʾ��һ�Ҵ���װ����*/
{	
	int i;
	remain=0;/*��һ�Ҵ�ʣ�µ�װ����*/
	for(i=1;i<=n;i++)	
	{	
		remain+=w[i];	
	}
	bestw=0;/*��ʼ����һ�Ҵ�����װ����*/
	Backtrace(1);
	return bestw;	
}
void main()
{
	int i;
	printf("�����뼯װ�����Ŀ=");
	scanf("%d",&n);
	w=(int*)malloc(sizeof(int)*(n+1));
	x=(int*)malloc(sizeof(int)*(n+1));
	bestx=(int*)malloc(sizeof(int)*(n+1));
	printf("�������һ�Ҵ���װ����=");
	scanf("%d",&c);
	printf("������ÿ����װ�������:\n");
	for (i=1;i<=n;i++)	
	{	
		printf("��%d������=",i);
		scanf("%d",&w[i]);	
	}
	bestw=BestSoution(w,n,c);
	for (i=1;i<=n;i++)	
	{	
		printf("%4d",bestx[i]);	
	}
	printf("\n");
	printf("����ڵ�һ�Ҵ��ϵ�����:%d\n",bestw); 
	free(w);
	free(x);
	free(bestx);
}

