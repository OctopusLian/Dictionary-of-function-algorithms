#include <math.h>
#include <stdio.h>
void main()
{
	   double v=-2.0;
	   while(v<=2.0)
	   {
		   printf("arctan(%-6.3f)is %.7f.\n",v,atan(v));
		   v+=0.5;
	   }
}
