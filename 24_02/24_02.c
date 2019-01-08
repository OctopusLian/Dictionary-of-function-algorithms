#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
	unsigned int weight;  /*Ȩֵ*/
	unsigned int parent,LChild,RChild;  /*ָ��˫�ס����Һ��ӽ���ָ��*/
} HTNode, *HuffmanTree;  /*�洢��������*/
typedef char *HuffmanCode;  /*�洢����������*/
void CreateHuffmanTree(HuffmanTree *ht,int *w,int n);
void Select(HuffmanTree *ht,int n,int *s1,int *s2);
void CreateHuffmanCode(HuffmanTree *ht, HuffmanCode *hc, int n);
void main()
{
	HuffmanTree HT;
	HuffmanCode HC;
	int *w,i,n,w1;
	printf("***********����������***********\n" );
	printf("�����������:" );
	scanf("%d",&n);
	w=(int *)malloc((n+1)*sizeof(int)); 
	printf("������%d��Ԫ�ص�Ȩֵ:\n",n); 
	for(i=1; i<=n; i++)
	{ 
		printf("%d: ",i); 
//		fflush(stdin);
		scanf("%d",&w1);
		w[i]=w1;
	}
	CreateHuffmanTree(&HT,w,n);/*�����������*/
	CreateHuffmanCode(&HT,&HC,n);/*�������������*/
}
void CreateHuffmanTree(HuffmanTree *ht,int *w,int n)
/*�����������ht,w�����֪��n��Ȩֵ*/
{
	int m,i,s1,s2;
	m=2*n-1;    /*�������*/
	*ht=(HuffmanTree)malloc((m+1)*sizeof(HTNode));
	for(i=1; i<=n; i++)  /*��ʼ��Ҷ�ӽ��*/
	{
		(*ht)[i].weight=w[i];
		(*ht)[i].LChild=0;
		(*ht)[i].parent=0;
		(*ht)[i].RChild=0;
	}
	for(i=n+1; i<=m; i++)  /*��ʼ����Ҷ�ӽ��*/
	{
		(*ht)[i].weight=0;
		(*ht)[i].LChild=0;
		(*ht)[i].parent=0;
		(*ht)[i].RChild=0;
	} 	
	printf("\n��������Ϊ: \n");	
	for(i=n+1; i<=m; i++)   /*������Ҷ�ӽ�㣬����������*/
	/*��(*ht)[1]~(*ht)[i-1]�ķ�Χ��ѡ��������С�Ľ��*/
	{ 
		Select(ht,i-1,&s1,&s2);
		(*ht)[s1].parent=i;
		(*ht)[s2].parent=i;
		(*ht)[i].LChild=s1;
		(*ht)[i].RChild=s2;
		(*ht)[i].weight=(*ht)[s1].weight+(*ht)[s2].weight;
		printf("%d (%d, %d)\n",
			(*ht)[i].weight,(*ht)[s1].weight,(*ht)[s2].weight);
	}
	printf("\n");
}
void CreateHuffmanCode(HuffmanTree *ht, HuffmanCode *hc, int n)
/*��Ҷ�ӽ�㵽����������ÿ��Ҷ�ӽ���Ӧ�Ĺ���������*/
{
	char *cd;   /*����Ĵ�ű���Ŀռ�*/
	int a[100];
	int i,start,p,w=0;
	unsigned int c;
	hc=(HuffmanCode *)malloc((n+1)*sizeof(char *));  /*����n�������ͷָ��*/
	cd=(char *)malloc(n*sizeof(char));  /*������ǰ����Ĺ����ռ�*/
	cd[n-1]='\0';  /*����������λ��ű��룬���ȴ�ű��������*/
	for(i=1; i<=n; i++)  
	/*��n��Ҷ�ӽ���Ӧ�Ĺ���������*/
	{
		a[i]=0;
		start=n-1;  /*��ʼָ��λ�������ұ�*/
		for(c=i,p=(*ht)[i].parent; p!=0; c=p,p=(*ht)[p].parent)  
		/*��Ҷ�ӵ�����������*/
		{
			
			if( (*ht)[p].LChild==c)
			{
				cd[--start]='0';  /*���֧����0*/
				a[i]++;
			}
			else 
			{
				cd[--start]='1';  /*�ҷ�֧����1*/
				a[i]++;
			}
		}
		/*Ϊ��i���������ռ�*/
		hc[i]=(char *)malloc((n-start)*sizeof(char)); 
		strcpy(hc[i],&cd[start]); /*��cd���Ʊ��뵽hc*/
	}
	free(cd);
	for(i=1; i<=n; i++)
		printf("ȨֵΪ%d�Ĺ���������Ϊ:%s\n",(*ht)[i].weight,hc[i]);
	for(i=1; i<=n; i++)
		w+=(*ht)[i].weight*a[i];
	printf("��Ȩ·��Ϊ:%d\n",w);	
} 
void Select(HuffmanTree *ht,int n,int *s1,int *s2)
/*ѡ������parentΪ0����weight��С�Ľ��s1��s2*/
{
	int i,min;
	for(i=1; i<=n; i++)
	{
		if((*ht)[i].parent==0)
		{
			min=i;
			break;
		}
	}
	for(i=1; i<=n; i++)
	{
		if((*ht)[i].parent==0)
		{
			if((*ht)[i].weight<(*ht)[min].weight)
				min=i;
		}
	}
	*s1=min;
	
	for(i=1; i<=n; i++)
	{
		if((*ht)[i].parent==0 && i!=(*s1))
		{
			min=i;
			break;
		}
	}
	for(i=1; i<=n; i++)
	{
		if((*ht)[i].parent==0 && i!=(*s1))
		{
			if((*ht)[i].weight<(*ht)[min].weight) 
				min=i;
		}
	}
	*s2=min;
}
