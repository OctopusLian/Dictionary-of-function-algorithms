#include<stdio.h>
#include<stdarg.h>
int FindMin(int amount, ...)
{
	int val,min,i;
	va_list arg;
	va_start(arg,amount);
	min=va_arg(arg,int);
	for(i=1;i<amount;i++)
	{
		val=va_arg(arg,int);
		min=(min<val)?min:val;
	}
	va_end(arg);
	return min;
}
void main()
{
	int min;
	min=FindMin(8,251,63,512,49,123,201,333,428);
	printf("在251,63,512,49,123,201,333,428中:\n");
	printf("最小的一个数是: %d\n",min);
}
