#include <stdio.h>
#include<stdlib.h>
#include <stdarg.h>
void PrintFormatted (FILE *stream, char *format, ...)
{
	va_list args;
	va_start (args, format);
	vfprintf (stream, format, args);
	va_end (args);
}
void main ()
{
	FILE * fp;
	fp=fopen ("myfile.txt","w");
	if(!fp)
	{
		printf("cannot open the file.\n");
		exit(-1);
	}
	PrintFormatted (fp,"name:%s.\n","÷‹Ω‹");
	PrintFormatted (fp,"chinese:%d.\n",87);
	PrintFormatted (fp,"math:%f.\n",91.5);
	fclose (fp); 
}
