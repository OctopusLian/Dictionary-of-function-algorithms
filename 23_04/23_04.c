#include<stdio.h>
void main() 
{ 
	int i,j,k,n; 
	printf("ˮ�ɻ�����:"); 
	for(n=100;n<1000;n++) 
	{ 
		i=n/100;	/*��λ�ϵ�����*/ 
		j=n/10%10;	/*ʮλ�ϵ�����*/ 
		k=n%10;		/*��λ�ϵ�����*/ 
		if(i*100+j*10+k==i*i*i+j*j*j+k*k*k) 
			printf("%5d",n); 
	} 
	printf("\n"); 
} 
