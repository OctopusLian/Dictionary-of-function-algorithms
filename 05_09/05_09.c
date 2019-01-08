#include <math.h>
#include <stdio.h>
void main()
{
	double x=1000.0,y;
	y=log10( x );
	printf( "log( %.2f )=%f\n", x, y );
	x=10.0;
	y=log10( x );
	printf( "log10( %.2f ) = %f\n", x, y );
}
