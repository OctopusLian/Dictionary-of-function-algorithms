#include <stdio.h> 
#include <ctype.h> 
void main() 
{ 
	int c;  
	c='a'; 
	printf("'%c'%s\n",c,iscntrl(c)?"�ǿ����ַ�":"���ǿ����ַ�"); 
	c=13; 
	printf("ASCII��Ϊ%x���ַ�%s\n",c,iscntrl(c)?
		"�ǿ����ַ�":"���ǿ����ַ�"); 
	c=0x7f; 
	printf("ASCII��Ϊ%x���ַ�%s\n",c,iscntrl(c)?
		"�ǿ����ַ�":"���ǿ����ַ�"); 
}
