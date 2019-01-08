#include<stdio.h>
#include<time.h>
void main()
{
	time_t start,end;
	double diff;
	char phone[80];
	start=time(NULL);
	printf("请输入你的手机号码:\n");
	gets(phone);
	end=time(NULL);
	diff=difftime(end,start);
	printf("输入手机号码花费的时间:%.2lf.\n",diff);
}
