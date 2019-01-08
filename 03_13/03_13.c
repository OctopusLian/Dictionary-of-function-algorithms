#include <stdio.h>
#include <string.h>
void main ()
{
	char str[]="Beiing,Shanghai Yangzhou; Zhengzhou.";
	char *p;
	printf ("Splitting string :\n\"%s\":\n",str);
	p=strtok (str," ;,.");
	while (p!=NULL)
	{
		printf ("%s\n",p);
		p=strtok (NULL, " ;,.");
	}
}
