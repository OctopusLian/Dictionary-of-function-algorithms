#include <time.h>
#include <stdio.h>
void main()
{
	struct tm *nowtime;
	time_t relatetime;
	time(&relatetime); 
	nowtime=localtime(&relatetime); 
	printf("��ǰ�����ں�ʱ��: %s",asctime(nowtime));
}
