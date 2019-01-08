#include<stdio.h>
#include<stdarg.h>
void Average(int amount, ...)
{
	int i;
	double val,total=0.0;
	va_list arg;
	printf ("浮点数: ");
	va_start(arg,amount);
	for (i=0;i<amount;i++)
	{
		val=va_arg(arg,double);
		printf("%8.2f",val);
		total+=val;
	}
	va_end(arg);
	printf ("\n平均值:%f\n",total/3);
}
void main ()
{
	Average(3,10.0,40.0,13.0);
}
