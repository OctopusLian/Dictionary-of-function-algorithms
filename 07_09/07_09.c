#include<stdio.h>
#include<time.h>
void main()
{
	time_t rawtime;
	struct tm *timeinfo;
	char buf[80];
	time(&rawtime);
	timeinfo=localtime(&rawtime);
	strftime(buf,80,"������%Y��%m��%d��.",timeinfo);
	puts(buf);
	strftime(buf,80,"���ڵ�ʱ���ǣ�%I:%M%p.",timeinfo);
	puts(buf);
	strftime (buf,80,"������%Y��ĵ�%j��.",timeinfo, timeinfo);
	puts(buf);
}
