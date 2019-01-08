#include<stdio.h>
#include<stdarg.h>
void MyPrintf(char *start, ...)
{
	char *str;
	va_list arg;
	str=start;
	va_start(arg,start);
	do 
	{
		puts(str);
		str=va_arg(arg,char*);
	}while(str!=NULL);
	va_end(arg);
}
void main()
{
	MyPrintf("Northern JiaoTong University",
		"Beijing University of Science and Technology",
		"Beijing Normal University",NULL);
}
