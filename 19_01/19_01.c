#include<stdio.h>
#define MaxSize 100
typedef struct
{
    int list[MaxSize];
    int length;
}Table;
int SeqSearch(Table S,int x)
/*��˳����в���Ԫ��x������ҵ����ظ�Ԫ���ڱ��е�λ�ã����򷵻�0*/
{
	int i=0;
	while(i<S.length&&S.list[i]!=x)	/*�ӱ�ĵ�1��Ԫ�ؿ�ʼ����x*/
		i++;
	if(S.list[i]==x)				/*����ҵ�x������Ԫ�ص�λ��*/
		return i+1;
	else							/*���򷵻�0*/
		return 0;
}
void main()
{
	Table T={{73,12,67,32,21,39,55,48},8};
	int i,position,x;
	printf("���е�Ԫ��:\n");
	for(i=0;i<T.length;i++)
		printf("%4d",T.list[i]);
	printf("\n������Ҫ���ҵ�Ԫ��:");
	scanf("%d",&x);
	position=SeqSearch(T,x);
	if(position)
		printf("%d�Ǳ�ĵ�%d��Ԫ��.\n",x,position);	
	else
		printf("û���ҵ�39.");	
}