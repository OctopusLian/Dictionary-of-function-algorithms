#include <stdio.h>
#include <stdlib.h>
void main ()
{
	int e,i,newsize=0;
	int *pValue=NULL;
	do
	{
		printf ("������һ������(-1��ʾ����): ");
		scanf ("%d", &e);
		newsize++;
		pValue=(int*) realloc(pValue, newsize*sizeof(int));
		if (pValue==NULL)
		{ 
			puts ("�����ڴ�ʧ��!\n"); 
			exit (-1); 
		}
		pValue[newsize-1]=e;
	} while (e!=-1);
	printf ("��������������: ");
	for (i=0;i<newsize;i++)
		printf ("%4d",pValue[i]);
	printf("\n");
	free (pValue);
}
