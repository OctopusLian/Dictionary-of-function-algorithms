	#include<stdio.h>
	void printarray(int a[],int n);
	void main()
	{
		int a[]={67,53,73,21,34,98,12};
		int t,i,j,low,high,mid,n;
		n=sizeof(a)/sizeof(a[0]);
		for(i=1;i<n;i++)
		{
			t=a[i];
			for(low=0,high=i-1;high>=low;)
			{
				mid=(low+high)/2;
				if(t<a[mid])
					high=mid-1;
				else
					low=mid+1;
			}
			for(j=i-1;j>=low;j--)
				a[j+1]=a[j];
			a[low]=t;
			printarray(a,n);
		}	
	}
	void printarray(int a[],int n)
	{
		int i;
		for(i=0;i<n;i++)
			printf("%4d",a[i]);
		printf("\n");
	}
