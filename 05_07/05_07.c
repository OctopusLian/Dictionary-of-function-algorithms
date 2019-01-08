#include <stdio.h>
#include <math.h>
void main ()
{
	double x=1.0, r;
	r=exp (x);
	printf ("The exponential value of %lf is %lf.\n", x, r );
	x=2.0;
	r=exp (x);
	printf ("The exponential value of %lf is %lf.\n", x, r );
}
