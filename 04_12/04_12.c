#include <stdio.h>
#include <stdlib.h>
int compare(const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}
void main()
{
	int key,*p,n,i;
	int a[]={ 15, 25, 35, 50, 60, 90, 95, 100 };
	n=sizeof(a)/sizeof(a[0]);
	printf("����a�е�Ԫ��:");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("������Ҫ���ҵ�Ԫ��:");
	scanf("%d",&key);
	p=(int*) bsearch (&key, a, 8, sizeof (int), compare);
	if (p!=NULL)
		printf ("%d������a�еĵ�%d��Ԫ��.\n",*p,p-a+1);
	else
		printf ("�����в�����%d.\n",key);
}
