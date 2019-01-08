#include<stdio.h>
#include<ctype.h>
void main()
{ 
	char ch1='*'; 
	char ch2='2'; 
	if(isalnum(ch1)!=0) 
		printf("'%c'是英文字母或数字字符\n",ch1); 
	else 
		printf("'%c'不是英文字母也不是数字字符\n",ch1); 
	if(isalnum(ch2)!=0) 
		printf("'%c'是英文字母或数字字符\n",ch2); 
	else 
		printf("'%c'不是英文字母或数字字符\n",ch2); 
}
