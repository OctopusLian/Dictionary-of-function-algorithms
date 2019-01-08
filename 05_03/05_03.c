#include <stdio.h>
#include <math.h>
#define PI 3.14159265
void main ()
{
	double angle;
	angle=-PI/4;
	while(angle<PI/2)
	{
		printf("The tangle of %lf degrees is %lf.\n", angle,tan(angle));
		angle+=PI/8;
	}
}
