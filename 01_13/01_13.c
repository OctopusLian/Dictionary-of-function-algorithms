#include<stdio.h>
void main() 
{ 
	int i,offset=0; 
	char str[40]; 
	for(i = 0; i < 10; i++) 
		offset+=sprintf(str+offset,"%d,",rand()%100); 
	str[offset-1]='\n'; 
	printf(str); 
}
