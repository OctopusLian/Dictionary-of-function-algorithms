#include <stdio.h>
#include <math.h>
#define PI 3.14159265
void main ()
{
	double angle, v;
	angle=60.0;
	v=cos (angle*PI/180);
	printf ("The cosine of %lf degrees is %lf.\n", angle, v );
	angle=120;
	v=cos (angle*PI/180);
	printf ("The cosine of %lf degrees is %lf.\n", angle, v );
}
