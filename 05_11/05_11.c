#include <stdio.h>
#include <math.h>
void main ()
{
	double x, r;
	printf("请输入一个数:");
	scanf("%lf",&x);
	r=sqrt (x);
	printf ("sqrt(%lf) = %lf\n", x, r );
}
