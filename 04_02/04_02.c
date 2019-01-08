#include <stdio.h>
#include <stdlib.h>
void main ()
{
	int a,b;
	char str1[80],str2[80];
	printf ("Enter the first number: ");
	fgets ( str1, 256, stdin );
	a=atoi (str1);
	printf ("Enter the second number: ");
	fgets ( str2, 256, stdin );
	b=atoi (str2);
	printf ("The sum is %d.\n",a+b);
}
