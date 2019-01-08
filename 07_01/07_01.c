#include<stdio.h>
#include<time.h>
void wait(int second)
{
	clock_t end;
	end=clock()+second*CLOCKS_PER_SEC ;
	while (clock()<end) 
		NULL;
}
void main()
{
	int i;
	printf ("计时开始...\n");
	for (i=3;i>0;i--)
	{
		printf("%d秒\n",i);
		wait(1);
	}
	printf("起步跑!\n");
}
