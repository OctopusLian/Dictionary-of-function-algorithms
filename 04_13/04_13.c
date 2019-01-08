	#include <stdio.h>
	#include <stdlib.h>
	int compare (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
	void main ()
	{
		int i,a[]={ 31, 29, 59, 8, 22, 68, 89, 77 },n;
		n=sizeof(a)/sizeof(a[0]);
		printf("≈≈–Ú«∞:\n");
		for (i=0; i<n; i++)
			printf ("%d ",a[i]);
		printf("\n");
		qsort (a, n, sizeof(int), compare);
		printf("≈≈–Ú∫Û:\n");
		for (i=0; i<n; i++)
			printf ("%d ",a[i]);
		printf("\n");
	}
