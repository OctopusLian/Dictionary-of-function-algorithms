#include<stdio.h> 
#include<math.h> 
#define EPS 1e-6
void main() 
{ 
	double a,x0,x1; 
	printf("������һ��ʵ��:"); 
	scanf("%lf",&a);
	if(a<0) 
		printf("�����������������!\n"); 
	else 
	{ 
		x0=a/2; 
		x1=(x0+a/x0)/2; 
		do 
		{ 
			x0=x1; 
			x1=(x0+a/x0)/2; 
		}while(fabs(x0-x1)>=EPS); 
	} 
	printf("%g��ƽ������:%g\n",a,x1); 
}