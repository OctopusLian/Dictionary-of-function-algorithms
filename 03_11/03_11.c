#include <stdio.h>
#include <string.h>
void main ()
{
	char str[]="Beijing is the politics,economy and cultural center!";
	char *p,ch='u';
	printf ("Looking for the '%c' in string as follows:\n\"%s\"\n",ch,str);
	p=strchr(str,ch);
	while (p!=NULL)
	{
		printf ("found at %d\n",p-str+1);
		p=strchr(p+1,ch);
	}
}
