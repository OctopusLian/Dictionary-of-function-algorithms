#include<stdio.h>
void DispArray(int a[],int n);
void DispArray2(int a[],int n,int pivot,int count);
void QSort(int a[],int n,int low,int high);
void QuickSort(int a[],int n);
int Partition(int a[],int low,int high);
void QSort(int a[],int n,int low,int high)
/*���ÿ��������㷨������a�е�Ԫ������*/
{ 
	int pivot;
	static count=1;
	if(low<high)	  /*���Ԫ�����еĳ��ȴ���1*/
	{ 
		pivot=Partition(a,low,high);/*������������a[low..high]����Ϊ������*/
		DispArray2(a,n,pivot,count);	/*���ÿ�λ��ֵĽ��*/
		count++;
		QSort(a,n,low,pivot-1); /*����ߵ��ӱ���еݹ�����pivot������λ��*/
		QSort(a,n,pivot+1,high);	/*���ұߵ��ӱ���еݹ����� */
	}
}
void QuickSort(int a[],int n)
/*������a���п�������*/
{ 
	QSort(a,n,0,n-1);
}
int Partition(int a[],int low,int high)
/*������a[low..high]��Ԫ�ؽ���һ������ʹ����ǰ���Ԫ��С������Ԫ�أ���������Ԫ�ش��ڵ�������Ԫ�أ�����������λ��*/
{ 
	int t,pivot;
	pivot=a[low];	/*����ĵ�һ��Ԫ����Ϊ����Ԫ��*/
	t=a[low];
	while(low<high)	/*�ӱ�����˽�������м�ɨ��*/
	{ 
		while(low<high&&a[high]>=pivot)/*�ӱ��ĩ����ǰɨ��*/
			high--;
		if(low<high)	/*����ǰhighָ���Ԫ�ر�����lowλ��*/
		{
			a[low]=a[high];
			low++;
		}
		while(low<high&&a[low]<=pivot)/*�ӱ��ʼ�����ɨ��*/
			low++;
		if(low<high)	/*����ǰlowָ���Ԫ�ر�����highλ��*/
		{
			a[high]=a[low];
			high--;
		}
		a[low]=t;		/*������Ԫ�ر�����low��λ��*/
	}
	return low;			/*������������λ��*/
}
void DispArray2(int a[],int n,int pivot,int count)
/*���ÿ�λ��ֵĽ��*/
{
	int i;
	printf("��%d�λ��ֽ��:[",count);
	for(i=0;i<pivot;i++)
		printf("%-4d",a[i]);
	printf("]");
	printf("%3d ",a[pivot]);
	printf("[");
	for(i=pivot+1;i<n;i++)
		printf("%-4d",a[i]);
	printf("]");
	printf("\n");
}
void main()
{
	int a[]={55,22,44,67,35,77,18,69};
	int n=sizeof(a)/sizeof(a[0]);
	printf("��������ǰ:");
	DispArray(a,n);
	QuickSort(a,n);
	printf("����������:");
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
