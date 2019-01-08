#include <stdio.h>
#include <stdarg.h>
void PrintFormatted(char * format, ...)
{
	va_list args;
	va_start(args, format);
	vprintf(format, args);
	va_end(args);
}
void main()
{
	PrintFormatted("Welcome to use %s.\n","Visual C++ 6.0");
	PrintFormatted("%s in %d is the 100th anniversary celebration.\n",
		"Northwest University",2002);
}
