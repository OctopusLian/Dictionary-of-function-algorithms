#include<stdio.h>
#define TableSize 100
#define IndexSize 20
typedef struct	/*˳�������*/
{
    int list[TableSize];
    int length;
}Table;
typedef struct	/*����������*/
{
    int maxvalue;
    int index;
}IndexTable[IndexSize];
int SeqIndexSearch(Table S,IndexTable T,int m,int x);
void main()
{
	Table S={{8,13,25,19,22,29,46,38,30,35,50,60,49,57,55,65,70,89,92,70},20};
	IndexTable T={{25,0},{46,5},{60,10},{92,15}};
	int x=49,pos,i;
	printf("������T:\n");
	printf("\t���Ԫ��ֵ:");
	for(i=0;i<4;i++)
		printf("%3d",T[i].maxvalue);
	printf("\n\t��ʼ�±�  :");
	for(i=0;i<4;i++)
		printf("%3d",T[i].index);
	printf("\n˳���S�е�Ԫ��:\n");
	for(i=0;i<S.length;i++)
		printf("%3d",S.list[i]);
	if((pos=SeqIndexSearch(S,T,4,x))!=0)
		printf("\nԪ��%d�������е�λ����:%2d\n",x,pos);
	else
		printf("\n����ʧ��!\n");
}
int SeqIndexSearch(Table S,IndexTable T,int m,int x)
/*������S�в���Ԫ��x��TΪ������
����ҵ����ظ�Ԫ���ڱ��е�λ�ã����򷵻�0*/
{
	int i,j,bl;	
	for(i=0;i<m;i++)	/*ͨ��������ȷ��Ҫ����Ԫ���������еĵ�Ԫ*/
		if(T[i].maxvalue>=x)
			break;
		if(i>=m)			/*���Ҫ���ҵ�Ԫ�ز��ڱ�S�У��򷵻�0*/
			return 0;
		j=T[i].index;		/*�ӵ�i����Ԫ���j��ʼ����Ԫ��x*/
		if(i<m-1)			/*blΪ��j��Ԫ�ĳ���*/
			bl=T[i+1].index-T[i].index;
		else
			bl=S.length-T[i].index;
		while(j<T[i].index+bl)
			if(S.list[j]==x)/*����ҵ�Ԫ��x���򷵻�x�����������ڵ�λ��*/
				return j+1;
			else
				j++;
			return 0;
}
