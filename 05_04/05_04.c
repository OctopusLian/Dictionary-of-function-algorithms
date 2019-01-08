#include <math.h>
#include <stdio.h>
void main()
{
	   double v=-1.0;
	   while(v<=1.0)
	   {
		   printf("arcos(%-6.3f)is %.7f.\n",v,acos(v));
		   v+=0.3;
	   }
}
