#include<stdio.h>
#include<time.h>
void main()
{
	time_t start,end;
	double diff;
	char phone[80];
	start=time(NULL);
	printf("����������ֻ�����:\n");
	gets(phone);
	end=time(NULL);
	diff=difftime(end,start);
	printf("�����ֻ����뻨�ѵ�ʱ��:%.2lf.\n",diff);
}
