#include<stdio.h>
#include<stdlib.h> 
#include<time.h> 
void main()
{
	int a[5][5];
	int i,j;
	srand(time(NULL));/*��õ�ǰ��ʱ����Ϊ�����������*/
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			a[i][j]=rand()%25+1;
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
				printf("%2d  ",a[i][j]);
			printf("\n");
		}
}
