#include<stdio.h>
#include<math.h>
#define N 1000
double f(double x);
double Integral(double a,double b,int n);
void main() 
{ 
	double a,b,value; 
	printf("����������޺�����:"); 
	scanf("%lf,%lf",&a,&b);
	value=Integral(a,b,N);
	printf("sin(x)������[%lg,%lg]�Ļ���Ϊ:%lf\n",a,b,value);
}
double f(double x) 
/*����*/ 
{ 
	return sin(x); 
} 
double Integral(double a,double b,int n) 
/*��������*/ 
{ 
	double s,h; 
	int i; 
	h=(b-a)/n;
	s=0.5*h*(f(a)+f(b));
	for(i=1;i<n;i++) 
		s=s+f(a+i*h)*h;
	return s; 
} 


