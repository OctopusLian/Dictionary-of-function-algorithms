	#include<stdio.h>
	#define MAX 100 
	int a[MAX]; 
	void comb(int n,int r) 
	{ 
		int i,j; 
		i=0;
		a[i]=1;
		do 
		{ 
			if(a[i]-i<=n-r+1) 			/*��������ǰ��̽*/
			{
				if (i==r-1)				/*�ҵ�һ�����*/
				{
					for(j=0;j<r;j++)		/*���һ�����*/
						printf("%4d",a[j]);
					printf("\n");
					a[i]++;
					continue;
				}
				i++;					/*��ǰ��̽*/
				a[i]=a[i-1]+1;
			}
			else						/*����*/
			{
				if(i==0)				/*����ȫ����*/
					return;
				a[--i]++;
			}
		}while(1);
	}
	void main() 
	{ 
		printf("������1~5�е�3�������������:\n");
		comb(5,3); 
	}
