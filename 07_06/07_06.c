#include <time.h>
#include <stdio.h>
void main()
{
	time_t t;
	struct tm *local,*gmt;
	time(&t);
	local=localtime(&t);
	printf("����ʱ����:%s",asctime(local));
	gmt=gmtime(&t);
	printf("��������ʱ����:%s",asctime(gmt));
}
