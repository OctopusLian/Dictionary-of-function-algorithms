#include<stdio.h>
#include<stdlib.h>
void main ()
{
	FILE *fp;
	char *str="This is a test!",ch;
	fp=fopen ("file.txt","w");
	if (!fp)
	{
		printf("cannot open file!");
		exit(-1);
	}
	while(*str)
	{
		fputc(*str,fp);
		str++;
	}
	fclose (fp);
   	fp=fopen ("file.txt","r");
	if (!fp)
	{
		printf("cannot open file!");
		exit(-1);
   	}
   	do 
   	{
		ch=fgetc(fp);
		putchar(ch);
   	} while (ch!=EOF);
   	putchar('\n');
   	fclose (fp);
}
