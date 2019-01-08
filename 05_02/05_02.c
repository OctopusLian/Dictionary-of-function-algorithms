#include <stdio.h>
#include <math.h>
#define PI 3.14159265
void main ()
{
	double angle, v;
	angle=30.0;
	v=sin (angle*PI/180);
	printf ("The sine of %lf degrees is %lf.\n", angle, v );
	angle=90.0;
	v=sin (angle*PI/180);
	printf ("The sine of %lf degrees is %lf.\n", angle, v );
}
