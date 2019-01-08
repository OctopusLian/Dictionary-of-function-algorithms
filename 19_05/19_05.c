#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct		/*Ԫ�����Ͷ���*/
{
	int value;		/*Ԫ��ֵ*/
	int hi;			/*��ͻ����*/
}DataType;
typedef struct		/*��ϣ�����Ͷ���*/
{
	DataType *data;
	int length;		/*��ϣ��ĳ���*/
	int num;		/*����Ԫ�ظ���*/
}HashTable;
void CreateHashTable(HashTable *H,int m,int p,int hash[],int n);
int SearchHash(HashTable H,int k);
void HashASL(HashTable H,int m);
void DisplayHash(HashTable H,int m);
void main()
{
	int hash[]={78,90,66,70,155,82,123,231};
	HashTable H;
	int m=11,p=11,n=8,pos,v;
	CreateHashTable(&H,m,p,hash,n);
	DisplayHash(H,m);
	printf("����������ҵ�Ԫ��:");
	scanf("%d",&v);
	pos=SearchHash(H,v);
	printf("Ԫ��%d�ڹ�ϣ���е�λ��:%d\n",v,pos);
	HashASL(H,m);
}
void CreateHashTable(HashTable *H,int m,int p,int hash[],int n)
/*�����ϣ���������ͻ*/
{ 
	int i,sum,addr,di,k=1;
	/*Ϊ��ϣ�����洢�ռ�*/
	(*H).data=(DataType*)malloc(m*sizeof(DataType));
	if(!(*H).data)	
		exit(-1); 
	(*H).num=n;			/*��ʼ����ϣ���Ԫ�ظ���*/
    (*H).length=m;		/*��ʼ����ϣ��ĳ���*/
	for(i=0;i<m;i++)	/*��ʼ����ϣ��*/
	{
		(*H).data[i].value=-1;
		(*H).data[i].hi=0;
	}
	/*�����ϣ�������ͻ*/
	for(i=0;i<n;i++)
	{
		sum=0;			/*sum��¼��ͻ����*/
		addr=hash[i]%p;	/*���ó������������ϣ������ַ*/
		di=addr;
		if((*H).data[addr].value==-1)	/*�������ͻ��Ԫ�ش洢�ڱ���*/
		{
			(*H).data[addr].value=hash[i];
			(*H).data[addr].hi=1;
		}
		else			/*������̽����ɢ�з������ͻ*/
		{
			do 
			{
				di=(di+k)%m;
				sum+=1;
			} while((*H).data[di].value!=-1);
			(*H).data[di].value=hash[i];
			(*H).data[di].hi=sum+1;
		}
	}
}
int SearchHash(HashTable H,int v)
/*�ڹ�ϣ��H�в���ֵΪv��Ԫ��*/
{
	int d,d1,m;
	m=H.length;
	d=d1=v%m;				/*��v�Ĺ�ϣ��ַ*/
	while(H.data[d].value!=-1)
	{
		if(H.data[d].value==v)	/*����ҵ�Ҫ���ҵ�Ԫ��v���򷵻�v��λ��*/
			return d;
		else					/*�������Ҫ�ҵ�Ԫ�أ������������*/
			d=(d+1)%m;
		if(d==d1)				/*����ұ��˹�ϣ���е�����λ�û�û���ҵ�v���򷵻�0*/
			return 0;
	}
	return 0;					/*��λ�ò�����Ԫ��v*/
}
void HashASL(HashTable H,int m)
/*���ϣ���ƽ�����ҳ���*/
{
	float average=0;
	int i;
	for(i=0;i<m;i++)
		average=average+H.data[i].hi;
	average=average/H.num;
	printf("ƽ�����ҳ���ASL:%.2f",average);
	printf("\n");  
}
void DisplayHash(HashTable H,int m)
/*�����ϣ��*/
{
	int i;
	printf("��ϣ���ַ:  ");
	for(i=0;i<m;i++)		/*�����ϣ��ĵ�ַ*/
		printf("%-5d",i);
	printf("\n");
	printf("Ԫ��ֵvalue: ");
	for(i=0;i<m;i++)		/*�����ϣ���Ԫ��ֵ*/
		printf("%-5d",H.data[i].value);
	printf("\n");
	printf("��ͻ����:    ");
	for(i=0;i<m;i++)		/*��ͻ����*/
		printf("%-5d",H.data[i].hi);
	printf("\n");
}