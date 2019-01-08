#include<stdio.h>
#include<math.h>
#define EPS 1e-6
double f(double x);
double f1(double x);
int Newton(double *x,int iteration);
void main() 
{ 
	double x; 
	int iteration;
	printf("�����ʼ����ֵx0:"); 
	scanf("%lf",&x);
		printf("���������������:"); 
	scanf("%d",&iteration);
	if(1==Newton(&x,iteration))
		printf("��ֵ�����ĸ�Ϊ:%lf\n",x);
	else
		printf("����ʧ��!\n");
}
double f(double x) 
/*����*/ 
{ 
	return x*x*x*x-3*x*x*x+1.5*x*x-4.0; 
} 
double f1(double x) 
/*������*/ 
{ 
	return 4*x*x*x-9*x*x+3*x; 
} 
int Newton(double *x,int iteration) 
/*��������*/ 
{ 
	double x1,x0; 
	int i; 
	x0=*x; /*��ʼ���̵Ľ��Ƹ�*/
	for(i=0;i<iteration;i++) /*iteration�ǵ�������*/
	{ 
		if(f1(x0)==0.0)/*�������Ϊ0���򷵻�0(�÷���ʧЧ)*/
		{ 
			printf("���������е���Ϊ0!\n"); 
			return 0; 
		} 
		x1=x0-f(x0)/f1(x0);/*��ʼţ�ٵ�������*/
		if(fabs(x1-x0)<EPS || fabs(f(x1))<EPS) /*�ﵽ��������*/
		{ 
			*x=x1; /*���ؽ��*/ 
			return 1; 
		} 
		else /*δ�ﵽ��������*/ 
			x0=x1; /*׼����һ�ε���*/ 
	} 
	printf("�������ĵ�������!\n"); /*���������ﵽ�涨�����ֵ����û�дﵽ����*/ 
	return 0; 
} 


