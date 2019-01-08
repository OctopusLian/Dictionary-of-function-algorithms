#include <math.h>
#include <stdio.h>
void main()
{
	   double v=-1.0;
	   while(v<=1.0)
	   {
		   printf("arcsin(%-6.3f)is %.7f.\n",v,asin(v));
		   v+=0.3;
	   }
}
