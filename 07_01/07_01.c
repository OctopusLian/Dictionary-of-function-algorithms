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
	printf ("��ʱ��ʼ...\n");
	for (i=3;i>0;i--)
	{
		printf("%d��\n",i);
		wait(1);
	}
	printf("����!\n");
}
