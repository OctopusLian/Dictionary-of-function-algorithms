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
	printf("数组a中的元素:");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("请输入要查找的元素:");
	scanf("%d",&key);
	p=(int*) bsearch (&key, a, 8, sizeof (int), compare);
	if (p!=NULL)
		printf ("%d是数组a中的第%d个元素.\n",*p,p-a+1);
	else
		printf ("数组中不存在%d.\n",key);
}
