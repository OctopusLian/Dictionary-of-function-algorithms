#include <stdio.h>
#include <string.h>
void main ()
{
	char buf1[256];
	char buf2[256];
	int n,len1, len2;
	printf ("Input the first string: "); 
	gets(buf1);
	printf ("Input the second string: "); 
	gets(buf2);
	len1=strlen(buf1);
	len2=strlen(buf2);
	n=memcmp ( buf1, buf2, len1>len2?len1:len2 );
	if (n>0) 
		printf ("'%s' is greater than '%s'.\n",buf1,buf2);
	else if (n<0) 
		printf ("'%s' is less than '%s'.\n",buf1,buf2);
	else 
		printf ("'%s' is the same as '%s'.\n",buf1,buf2);
}
