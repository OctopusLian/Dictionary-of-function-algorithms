#include <time.h>
#include <stdio.h>
void main()
{
	struct tm *nowtime;
	time_t relatetime;
	time(&relatetime); 
	nowtime=localtime(&relatetime); 
	printf("当前的日期和时间: %s",asctime(nowtime));
}
