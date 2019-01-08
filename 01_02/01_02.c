#include <stdio.h>
void main()
{
	   FILE *file;
	   char ch;
	   int n=0;
	   file=fopen("myfile.txt","r");
	   if (file==NULL) 
		   printf("cannot open file!");
	   else
	   {
		   do 
		   {
			   ch=fgetc (file);
			   if (ch>='a'&&ch<='z'||ch>='A'&&ch<='Z') 
				   n++;
		   } while (ch!=EOF);
		   fclose (file);
		   printf ("The file contains %d letters.\n",n);
	   }
}
