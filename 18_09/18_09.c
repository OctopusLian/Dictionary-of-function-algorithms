#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MaxSize 200	/*������Ԫ�ص�������*/
#define N 8         	/*������Ԫ�ص�ʵ�ʸ���*/
#define MaxNumKey 6	/*�ؼ������������ֵ*/
#define Radix 10		/*�ؼ��ֻ�����10��ʾʮ�������ֿ��Է�Ϊʮ��*/
/*��̬����Ľ�㣬��Ŵ�����Ԫ��*/
typedef struct
{
	int key[MaxNumKey]; 	/*�ؼ���*/
	int next;
}SListCell;	
/*��̬�������Ԫ������*/					
typedef struct
{
	SListCell data[MaxSize];		/*�洢Ԫ�أ�data[0]Ϊͷ���*/
	int keynum;				/*ÿ��Ԫ�صĵ�ǰ�ؼ��ָ���*/
	int length;					/*��̬����ĵ�ǰ����*/
}SList;				
typedef int addr[Radix]; /*ָ���������ͣ�����ָ��ÿ������ĵ�1���������һ�����*/ 
void DispList(SList L); 			/*��������е�Ԫ��*/
void DispStaticList(SList L); 		/*�Ծ�̬�������ʽ���Ԫ��*/
void InitList(SList *L,int d[],int n);
int trans(char c); 				/*���ַ�ת��Ϊ����*/
void Distribute(SListCell data[],int i,addr f,addr r); 	/*����*/
void Collect(SListCell data[],addr f,addr r); 		/*�ռ�*/
void RadixSort(SList *L); 					/*��������*/
void Distribute(SListCell data[],int i,addr f,addr r) 
/*Ϊdata�����еĵ�i���ؼ���key[i]����Radix���ӱ�ʹͬһ�ӱ���Ԫ�ص�key[i]��ͬ*/ 
/*f[0..Radix-1]��r[0..Radix-1]�ֱ�ָ������ӱ��е�һ�������һ��Ԫ��*/
{ 
	int j,p;
	for(j=0;j<Radix;j++)			/*��ʼ�������ӱ�*/
		f[j]=0;
	for(p=data[0].next;p;p=data[p].next)
	{
		j=trans(data[p].key[i]);		/*���ؼ���ת��Ϊ����*/
		if(!f[j])				/*f[j]�ǿձ���f[j]ָʾ��һ��Ԫ��*/
			f[j]=p;
		else
			data[r[j]].next=p;
		r[j]=p;		/*��p��ָ�Ľ������j���ӱ���*/
	}
}
void Collect(SListCell data[],addr f,addr r)
/*�ռ�����key[i]��f[0..Radix-1]��ָ���ӱ��������ӳ�һ����̬����*/
{ 
	int j,t;
	for(j=0;!f[j];j++);	/*�ҵ�һ���ǿ��ӱ�succΪ���̺���*/
	data[0].next=f[j];
	t=r[j];			/*r[0].nextָ���һ���ǿ��ӱ��е�һ�����*/
	while(j<Radix-1)
	{
		for(j=j+1;j<Radix-1&&!f[j];j++);		/*����һ���ǿ��ӱ�*/
		if(f[j])		/*���ǿ�����������һ��*/
		{
			data[t].next=f[j];
			t=r[j];
		}
	}
	data[t].next=0;		/*tָ�����һ���ǿ��ӱ��е����һ�����*/
}
void RadixSort(SList *L)
/*��������ʹ��L��Ϊ���ؼ��ַǵݼ��ľ�̬����L.r[0]Ϊͷ���*/
{ 
	int i;
	addr f,r;
	for(i=0;i<(*L).keynum;i++)	/*�ɵ�λ����λ���ζԸ��ؼ��ֽ��з���
		���ռ�*/ 
	{				
		Distribute((*L).data,i,f,r);		/*��i�˷���*/
		Collect((*L).data,f,r);			/*��i���ռ�*/
		printf("��%d���ռ���:",i+1);
		DispStaticList(*L);
	}
}
void InitList(SList *L,int a[],int n)
/*��ʼ����̬����L*/
{
	char ch[MaxNumKey],ch2[MaxNumKey];
	int i,j,max=a[0];
	for(i=1;i<n;i++)			/*������Ԫ�ش���max*/
		if(max<a[i])
			max=a[i];
		(*L).keynum=(int)(log10(max))+1;	/*���ӹؼ��ֵĸ���*/
		(*L).length=n;					/*���������*/
		for(i=1;i<=n;i++)
		{
			itoa(a[i-1],ch,10);	/*������ת��Ϊ�ַ���������ch*/
			for(j=strlen(ch);j<(*L).keynum;j++)/*��ch�ĳ���<max��λ��������chǰ��'0'*/ 
			{
				strcpy(ch2,"0");
				strcat(ch2,ch);
				strcpy(ch,ch2);
			}
			for(j=0;j<(*L).keynum;j++)	/*��ÿ��Ԫ�صĸ�λ������key����Ϊ�ؼ���*/
				(*L).data[i].key[j]=ch[(*L).keynum-1-j];
		}
		for(i=0;i<(*L).length;++i)			/*��ʼ����̬����*/
			(*L).data[i].next=i+1;
		(*L).data[(*L).length].next=0; 
}
void main()
{
	int d[N]={236,128,34,567,321,793,317,106};
	SList L;
	InitList(&L,d,N);
	printf("������Ԫ�ظ�����%d��,�ؼ��ָ���Ϊ%d��\n",L.length,
		L.keynum);
	printf("����ǰ��Ԫ������:");
	DispStaticList(L);
	printf("����ǰ��Ԫ�صĴ�����:\n");
	DispList(L);
	RadixSort(&L);	
	printf("�����Ԫ�صĴ�����:\n");
	DispList(L);
}
void DispList(SList L)
/*�����������ʽ�����̬����*/
{ 
	int i,j;
	printf("��� �ؼ��� ��ַ\n");
	for(i=1;i<=L.length;i++)
	{
		printf("%2d    ",i);
		for(j=L.keynum-1;j>=0;j--)
			printf("%c",L.data[i].key[j]);
		printf("    %d\n",L.data[i].next);
	}
}
void DispStaticList(SList L)
/*��������ʽ�����̬����*/
{
	int i=L.data[0].next,j;
	while(i)
	{
		for(j=L.keynum-1;j>=0;j--)
			printf("%c",L.data[i].key[j]);
		printf(" ");
		i=L.data[i].next;
	}
	printf("\n");
}
int trans(char c)
/*���ַ�cת��Ϊ��Ӧ������*/
{ 
	return c-'0';
}
