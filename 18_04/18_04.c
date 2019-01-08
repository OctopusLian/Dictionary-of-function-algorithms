#include<stdio.h>
void PrintArray(int a[],int n);
void main()
{
	int a[]={56,72,44,31,99,21,69,80};
	int i,j,t,n=sizeof(a)/sizeof(a[0]);
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		printf("╣з%dлкеепР╫А╧Ш:",i);
		PrintArray(a,n);
	}
}
void PrintArray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
	printf("\n");
}