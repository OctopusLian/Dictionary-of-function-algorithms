#include <stdio.h>
#include <stdlib.h>
void main ()
{
	const double PI=3.14159265;
	double r,area;
	char szInput[256];
	printf("请输入一个圆的半径: ");
	gets(szInput);
	r=atof ( szInput );
	area=PI*r*r;
	printf("半径为%f的圆面积为%f\n",r,area);
}
