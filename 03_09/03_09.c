#include <stdio.h>
#include <string.h>
void main ()
{
	char str1[40],str2[40];
	int len;
	printf("Input a string:\n");
	gets(str1);
	printf("Input another string:\n");
	gets(str2);
	len=39-strlen(str2);
	printf("connact two string:\n");
	strncat (str1, str2, len);
	puts (str1);
}
