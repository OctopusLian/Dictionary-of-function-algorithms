#include <stdlib.h>
#include <stdio.h>
void main( )
{
	char *s; 
	long l;
	s="123E67 yuan";    
	l=atol( s );
	printf( "ASCII string: \"%s\" \tcovert to long: %ld\n", s, l);
	s="567 yuan";    
	l=atol( s );
	printf( "ASCII string: \"%s\" \tcovert to long: %ld\n", s, l);
}
