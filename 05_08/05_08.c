#include <stdio.h>
#include <math.h>
void main ()
{
	double x, r;
	printf("Input a float number:");
	scanf("%lf",&x);
	r=log (x);
	printf ("ln(%lf)=%lf\n", x, r );
}
