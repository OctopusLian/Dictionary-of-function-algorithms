#include<time.h>
#include<stdio.h>
void main()
{
	   struct tm *t;
	   time_t now;
	   time(&now);
	   printf("距离1970年1月1日00:00:00的秒数：%d\n",now);
	   t=localtime(&now);
	   now=mktime(t);
	   printf("距离1970年1月1日00:00:00的秒数：%d\n",now);
}
