#include <stdio.h>
#include <string.h>
void main ()
{
	char source[]="Beijing Welcome you";
	char dest[]="Shanghai is an internationalization metropolis";
	char *p;
	printf("source string:\n");
	puts(source);
	printf("Destination string before copying:\n");
	puts(dest);
	p=memcpy (dest,source,strlen(source)+1);
	if(p)
	{
		printf("Destination string after copying is:\n");
		puts(dest);
		puts(p);
	}
	else 
		printf("copy failed!\n");
}
