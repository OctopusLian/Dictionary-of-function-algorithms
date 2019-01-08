#include<stdio.h>
#include<ctype.h>
void main() 
{ 
	int c; 
	c='x'; 
	printf("%c:%s\n",c,isalpha(c)?"是英文字母":"不是英文字母"); 
	c='6'; 
	printf("%c:%s\n",c,isalpha(c)?"是英文字母":"不是英文字母"); 
	c='&'; 
	printf("%c:%s\n",c,isalpha(c)?"是英文字母":"不是英文字母"); 
}
