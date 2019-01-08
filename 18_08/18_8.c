#include<stdio.h>
#include<malloc.h>
void CopyArray(int source[], int dest[],int len,int first);
void MergeSort(int a[],int left,int right);
void Merge(int a[],int left,int right);
void DispArray(int a[],int n);
void main()   
{   
    int a[] = {49,23,66,52,34,75,99,18};   
    int len = sizeof(a)/sizeof(int);  
	printf("����ǰ�����е�Ԫ��:\n");
    DispArray(a,len);   
    MergeSort(a,0,len-1); 
	printf("����������е�Ԫ��:\n");
    DispArray(a,len);     
} 
void MergeSort(int a[],int left,int right)  
/*�鲢����*/ 
{   
    int i;     
    if(left < right)   
    {   
        i = (left+right)/2;   
        MergeSort(a,left,i);   
        MergeSort(a,i+1,right);   
        Merge(a,left,right);   
    }   
}    
void Merge(int a[],int left,int right) 
/*�ϲ������������е�Ԫ��*/   
{   
    int begin1,begin2,mid,k=0,len,*b;
	begin1= left;   
    mid = (left+right)/2 ;   
    begin2 = mid+1;   
    len = right-left+1;   
    b = (int*)malloc(len*sizeof(int));   
    while(begin1<=mid && begin2<=right)   
    {   
        if(a[begin1]<=a[begin2])   
            b[k++] = a[begin1++];   
        else  
            b[k++] = a[begin2++];   
    }   
    while(begin1<=mid)   
        b[k++] = a[begin1++];   
    while(begin2<=right)   
        b[k++] = a[begin2++];   
    CopyArray(b,a,len,left);   
    free(b);   
}   
void CopyArray(int source[], int dest[],int len,int start)  
/*��source�����е�Ԫ�ظ��Ƶ�dest������.
����,len��Դ���鳤��,start��Ŀ��������ʼλ��*/   
{   
    int i,j=start;   
    for(i=0;i<len;i++)   
    {   
        dest[j] = source[i];   
        j++;   
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

