#include <stdio.h>
#include <stdlib.h>
void main ()
{
	const double PI=3.14159265;
	double r,area;
	char szInput[256];
	printf("������һ��Բ�İ뾶: ");
	gets(szInput);
	r=atof ( szInput );
	area=PI*r*r;
	printf("�뾶Ϊ%f��Բ���Ϊ%f\n",r,area);
}
