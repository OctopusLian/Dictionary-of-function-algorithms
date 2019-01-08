#include <stdio.h>
#include <string.h>
void main ()
{
	char str1[] ="Beijing Shanghai Tianjin Nanjing Xi'an";
	char *p,str2[]="Tianjin";
	printf("Searching for the \"%s\" in \n\"%s\"\n",str2,str1);
	p=strstr (str1,str2);
	printf("Found at %d.\n",p-str1+1);
}
