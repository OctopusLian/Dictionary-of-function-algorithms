#include<stdio.h>
long Cow(int year);
void main()
{
	long n;
	int year;
	printf("����������:");
	scanf("%d",&year);
	n=Cow(year);
	printf("%d���ţ������:%d\n",year,n);
}
long Cow(int years)
{
	long count=1;
	int i,subYears;
	if (years<=3)
	{
		return 1;
	}
	i=4;
	while (i<=years)
	{
		subYears =i-3;
		count += Cow(subYears);
		i++;
	}
	return count;
}
