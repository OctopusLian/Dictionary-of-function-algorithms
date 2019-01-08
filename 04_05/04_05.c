#include <stdio.h>      
#include <stdlib.h>     
void main ()
{
	char strNum[] = "6012 31E2DF  0x9EFBD  077776  -10101110101000010";
	char * pEnd;
	long int a1, a2, a3, a4 ,a5;
	printf ("转换前的字符串: %s.\n", strNum);
	a1 = strtol (strNum,&pEnd,10);
	a2 = strtol (pEnd,&pEnd,16);
	a3 = strtol (pEnd,&pEnd,0);
	a4 = strtol (pEnd,&pEnd,8);
	a5 = strtol (pEnd,NULL,2);
	printf ("转换后的整型数: %ld, %ld, %ld ,%ld, %ld.\n", a1, a2, a3, a4 ,a5);
}
