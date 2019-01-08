#include<stdio.h>
#define MaxSize 100
typedef struct
{
	int list[MaxSize];
	int length;
}Table;
int BinarySearch(Table S,int x);
void main()
{
	Table T={{12,24,36,48,60,72,84,96},8};
	int i,find,x;
	printf("����˳����е�Ԫ��:\n");
	for(i=0;i<T.length;i++)
		printf("%4d",T.list[i]);
	printf("\n������Ҫ���ҵ�Ԫ��:");
	scanf("%d",&x);
	find=BinarySearch(T,x);
	if(find)
		printf("Ԫ��%d��˳����еĵ�%d��Ԫ��.\n",x,find);
	else
		printf("û���ҵ���Ԫ��.\n");
}
int BinarySearch(Table S,int x)
/*������˳������۰����Ԫ��x��
����ҵ����򷵻ظ�Ԫ���ڱ��е�λ�ã����򷵻�0*/
{
	int low,high,mid;
	low=0,high=S.length-1;			/*���ô�����Ԫ�ط�Χ���½���Ͻ�*/
	while(low<=high)
	{
		mid=(low+high)/2;
		if(S.list[mid]==x)		/*����ҵ�Ԫ�أ��򷵻ظ�Ԫ�����ڵ�λ��*/
			return mid+1;
		else if(S.list[mid]<x)	/*���mid��ָʾ��Ԫ��С��x�����޸�lowָ��*/
			low=mid+1;
		else if(S.list[mid]>x)	/*���mid��ָʾ��Ԫ�ش���x�����޸�highָ��*/
			high=mid-1;
	}
	return 0;
}
