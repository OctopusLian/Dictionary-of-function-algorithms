#include<stdio.h>
void SelectSort(int a[],int n);
void DispArray(int a[],int n);
void main()
{
	int a[]={65,32,71,28,83,7,53,49};
	int n=sizeof(a)/sizeof(a[0]);
	SelectSort(a,n);
	printf("����������:");
	DispArray(a,n);
}
void SelectSort(int a[],int n)
/*��ѡ������*/
{
	int i,j,k,t;
	/*����i��Ԫ�����i+1...n��Ԫ�رȽϣ�����С�ĵ�Ԫ�ط��ڵ�i��λ��*/
	for(i=0;i<n-1;i++)
	{
		j=i;
		for(k=i+1;k<n;k++)	/*��С��Ԫ�ص����Ϊj*/
			if(a[k]<a[j])
				j=k;
			if(j!=i)			/*������i������j������Ҫ�����i�����j��Ԫ�ؽ���*/
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			printf("��%d��������:",i+1);
			DispArray(a,n);
	}
}
void DispArray(int a[],int n)
/*��������е�Ԫ��*/
{
	int i;
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
	printf("\n");
}
