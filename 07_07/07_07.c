#include <time.h>
#include <stdio.h>
void main()
{
	time_t timer;
	struct tm *t;
	char ampm[10];
	timer=time(NULL);
	t=localtime(&timer);
	if(t->tm_hour>12)
	{
		strcpy(ampm,"PM");
		t->tm_hour-=12;
	}
	else
		strcpy(ampm,"AM");
	if(t->tm_hour==0)  
		t->tm_hour=12;
	printf( "12-hour time: %.8s %s\n",asctime(t)+11, ampm);
}
