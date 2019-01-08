#include <string.h>
#include <stdio.h>
void main()
{
	   char s[60];
	   printf( "Enter password:" );
	   gets(s);
	   while(strcmp(s,"nwu"))
	   {
		   printf("Invalid password!\n");
		   printf("Enter password.");
		   gets(s);
	   }
	   printf("Congratulate!you are right!\n");
}
