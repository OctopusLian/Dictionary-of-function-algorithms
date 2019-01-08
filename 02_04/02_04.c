#include <stdio.h> 
#include <ctype.h> 
void main() 
{ 
	int c;  
	c='a'; 
	printf("'%c'%s\n",c,iscntrl(c)?"是控制字符":"不是控制字符"); 
	c=13; 
	printf("ASCII码为%x的字符%s\n",c,iscntrl(c)?
		"是控制字符":"不是控制字符"); 
	c=0x7f; 
	printf("ASCII码为%x的字符%s\n",c,iscntrl(c)?
		"是控制字符":"不是控制字符"); 
}
