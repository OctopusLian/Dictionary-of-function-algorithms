#include<stdio.h>
#include<time.h>
void main()
{
	time_t rawtime;
	struct tm *timeinfo;
	char buf[80];
	time(&rawtime);
	timeinfo=localtime(&rawtime);
	strftime(buf,80,"今天是%Y年%m月%d日.",timeinfo);
	puts(buf);
	strftime(buf,80,"现在的时间是：%I:%M%p.",timeinfo);
	puts(buf);
	strftime (buf,80,"今天是%Y年的第%j天.",timeinfo, timeinfo);
	puts(buf);
}
