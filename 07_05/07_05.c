#include <time.h>
#include <stdio.h>
void main()
{
	time_t t;
	struct tm *t2;
	time(&t);
	printf("当前的时间是:%s",ctime(&t));
	t2=localtime(&t);
	printf("当前的时间是:%s",asctime(t2));
}
