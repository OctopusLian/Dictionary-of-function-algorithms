#include <time.h>
#include <stdio.h>
void main()
{
	time_t t;
	struct tm *t2;
	time(&t);
	printf("��ǰ��ʱ����:%s",ctime(&t));
	t2=localtime(&t);
	printf("��ǰ��ʱ����:%s",asctime(t2));
}
