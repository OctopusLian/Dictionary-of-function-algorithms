#include <time.h>
#include <stdio.h>
void main()
{
	time_t timer;
	time(&timer);
	printf("距离1970年1月1日00:00:00的秒数：%ld\n",timer);
}
