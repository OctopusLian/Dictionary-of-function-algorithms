#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	int *p;
	printf ("������Ԫ�ظ���: ");
	scanf ("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if (p==NULL) 
	{
		printf("�����ڴ�ʧ��.\n");
		exit (-1);
	}
	for (i=0;i<n;i++)
	{
		printf ("�������%d����: ",i+1);
		scanf ("%d",&p[i]);
	}
	printf ("Ԫ��ֵ: ");
	for (i=0;i<n;i++) 
		printf ("%d ",p[i]);
	printf("\n");
	free (p);
	return 0;
}
