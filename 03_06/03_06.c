#include <stdio.h>
#include <string.h>
void main()
{
	char s1[]="www.sohu.com";
	char s2[60],*p;
	p=strcpy (s2,s1);
	printf ("s1: %s\n",s1);
	printf("p: %s\ns2: %s\n",p,s2);
}
