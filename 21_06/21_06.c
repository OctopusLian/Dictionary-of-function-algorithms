#include<stdio.h>
#include<math.h>
#define EPS 1e-6
double f(double x);
void main()
{
	double a,b,c;
	printf("������һ������(��:1,4):"); 
	scanf("%lf,%lf",&a,&b);
	printf("����3*x*x*x-13*x+2=0�Ľ�:x="); 
	if (fabs(f(a)) <= EPS) 
	{ 
		printf("%lg\n", a); 
	} 
	else if (fabs(f(b)) <= EPS) 
	{ 
		printf("%lg\n", b); 
	} 
	else if (f(a)*f(b) > 0) 
	{ 
		printf("f(%lg)*f(%lg)>0����������,ʹf(%lg)*f(%lg)<=0 !\n",a,b); 
	} 
	else 
	{ 
		while (fabs(f(c))>EPS&&fabs(b-a)>EPS) 
		{ 
			c=(a+b)/2.0; 
			if (f(a)*f(c)<0) 
				b = c; 
			else 
				a = c; 
		} 
		printf("%lg\n", c); 
	} 	
}
double f(double x)
{
	return 3*x*x*x-13*x+2;
}
