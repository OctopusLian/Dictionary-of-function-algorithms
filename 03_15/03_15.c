#include <stdio.h>
#include <string.h>
void main ()
{
	char szInput[256];
	printf ("Enter a string: \n");
	gets (szInput);
	printf ("The string length: %d.\n",strlen(szInput));
	printf ("The string size: %d.\n",sizeof(szInput));
}
