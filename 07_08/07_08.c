#include<time.h>
#include<stdio.h>
void main()
{
	   struct tm *t;
	   time_t now;
	   time(&now);
	   printf("����1970��1��1��00:00:00��������%d\n",now);
	   t=localtime(&now);
	   now=mktime(t);
	   printf("����1970��1��1��00:00:00��������%d\n",now);
}
