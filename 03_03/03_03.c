#include <stdio.h>
#include <string.h>
void main ()
{
	char *str[]={"Wang huan","Wang tao","wu xue","wang chong"};
	int i;
	printf ("Looking for person whose family name is Wang...\n");
	for (i=0 ; i<4 ; i++)
		if (strncmp (str[i],"Wang...",4)==0)
		{
			printf ("%s\n",str[i]);
		}
}
