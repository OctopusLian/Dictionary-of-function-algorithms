#include <stdio.h>    
#include <stdlib.h>   
void main ()
{
    char strOriginal[] = "563.68 63.32 215.67";
	char *pEnd;
	double d1,d2,d3;
	d1 = strtod (strOriginal, &pEnd);
	printf ("ת����ĵ�һ����������%.2f.\n", d1);
	d2 = strtod (pEnd, &pEnd);
	printf ("ת����ĵڶ���������%.2f.\n",d2);
	d3 = strtod (pEnd, NULL);
	printf ("ת����ĵ�����������%.2f.\n",d3);
}
