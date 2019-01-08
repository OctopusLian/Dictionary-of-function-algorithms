#include<stdio.h>
void DispArray(int a[],int n);
void AdjustHeap(int a[],int s,int m);
void CreateHeap(int a[],int n);
void HeapSort(int a[],int n);
void main()
{
	int a[]={67,48,23,81,38,19,52,40};
	int n=sizeof(a)/sizeof(a[0]);
	printf("����ǰ:");
	DispArray(a,n);
	HeapSort(a,n);
	printf("��������:");
	DispArray(a,n);
}
void DispArray(int a[],int n)
/*��������е�Ԫ��*/
{
	int i;
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
	printf("\n");
}
void CreateHeap(int a[],int n)
/*�����󶥶�*/
{
	int i;
	for(i=n/2-1;i>=0;i--)	/*�����n/2-1��ʼ�����󶥶�*/
		AdjustHeap(a,i,n-1);
}
void AdjustHeap(int a[],int s,int m)
/*����a[s...m]��ʹ���Ϊһ���󶥶�*/
{ 
	int t,j;
	t=a[s];								/*���������ʱ������t��*/
	for(j=2*s+1;j<=m;j*=2+1)
	{ 
		if(j<m&&a[j]<a[j+1])			/*�عؼ��ֽϴ�ĺ��ӽ������ɸѡ*/
			j++;						/*jΪ�ؼ��ֽϴ�Ľ����±�*/
		if(t>a[j])						/*������ӽ���ֵС�ڸ�����ֵ���򲻽��н���*/
			break;
		a[s]=a[j];
		s=j;
	}
	a[s]=t;								/*���������뵽��ȷλ��*/
}
void HeapSort(int a[],int n)
/*���ö������㷨������a�е�Ԫ�ؽ�������*/
{ 
	int t,i;
	CreateHeap(a,n);		/*������*/
	for(i=n-1;i>0;i--)		/*���Ѷ�Ԫ�������һ��Ԫ�ؽ��������µ�����*/
	{ 
		t=a[0];
		a[0]=a[i];
		a[i]=t;
		printf("��%d��������:",n-i);
		DispArray(a,n);
		AdjustHeap(a,0,i-1);		/*��a[0..i-1]����Ϊ�󶥶�*/
	}
}

