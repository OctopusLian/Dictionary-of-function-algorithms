#include<string.h>
#include <stdio.h>
void main()
{
	char buffer[]="Beijing is a beautiful city.";
	char fmt1[]=  "         1         2         3";
	char fmt2[]=  "123456789012345678901234567890";
	char *p;
	int c='c',r;
	printf( "Searching character in string:\n%s\n", buffer );
	printf( "%s\n%s\n", fmt1, fmt2 );
	printf( "Search char: %c\n", c);
	p=memchr( buffer, c, strlen(buffer));
	r=p - buffer + 1;
	if( p!=NULL )
		printf( "Result: %c found at position %d.\n", c, r);
	else
		printf( "Result: %c not found.\n" );
}
