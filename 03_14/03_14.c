#include <stdio.h>
#include <string.h>
void main ()
{
	char str[]="Do you know The Tsinghua University is a famous university!";
	printf("original string:\n");
	puts(str);
	memset (str,' ',12);
	printf("destination string:\n");
	puts (str);
}
