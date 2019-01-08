#include <time.h>
#include <stdio.h>
void main()
{
	time_t t;
	struct tm *local,*gmt;
	time(&t);
	local=localtime(&t);
	printf("北京时间是:%s",asctime(local));
	gmt=gmtime(&t);
	printf("格林尼治时间是:%s",asctime(gmt));
}
