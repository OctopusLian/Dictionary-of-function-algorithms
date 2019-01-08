#include <stdio.h>    
#include <stdlib.h>   
void main ()
{
    char strOriginal[] = "563.68 63.32 215.67";
	char *pEnd;
	double d1,d2,d3;
	d1 = strtod (strOriginal, &pEnd);
	printf ("转换后的第一个浮点数：%.2f.\n", d1);
	d2 = strtod (pEnd, &pEnd);
	printf ("转换后的第二个浮点数%.2f.\n",d2);
	d3 = strtod (pEnd, NULL);
	printf ("转换后的第三个浮点数%.2f.\n",d3);
}
