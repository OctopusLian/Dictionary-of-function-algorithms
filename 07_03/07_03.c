#include <time.h>
#include <stdio.h>
void main()
{
	time_t timer;
	time(&timer);
	printf("����1970��1��1��00:00:00��������%ld\n",timer);
}
