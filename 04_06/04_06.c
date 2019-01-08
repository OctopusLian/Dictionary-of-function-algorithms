#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	int *p;
	printf ("请输入元素个数: ");
	scanf ("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if (p==NULL) 
	{
		printf("分配内存失败.\n");
		exit (-1);
	}
	for (i=0;i<n;i++)
	{
		printf ("请输入第%d个数: ",i+1);
		scanf ("%d",&p[i]);
	}
	printf ("元素值: ");
	for (i=0;i<n;i++) 
		printf ("%d ",p[i]);
	printf("\n");
	free (p);
	return 0;
}
