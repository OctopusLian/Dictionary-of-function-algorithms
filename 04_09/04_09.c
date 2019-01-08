#include <stdio.h>
#include <stdlib.h>
void main ()
{
	int e,i,newsize=0;
	int *pValue=NULL;
	do
	{
		printf ("请输入一个整数(-1表示结束): ");
		scanf ("%d", &e);
		newsize++;
		pValue=(int*) realloc(pValue, newsize*sizeof(int));
		if (pValue==NULL)
		{ 
			puts ("分配内存失败!\n"); 
			exit (-1); 
		}
		pValue[newsize-1]=e;
	} while (e!=-1);
	printf ("各个整数依次是: ");
	for (i=0;i<newsize;i++)
		printf ("%4d",pValue[i]);
	printf("\n");
	free (pValue);
}
