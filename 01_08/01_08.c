#include<stdio.h>
#include<stdlib.h>
void main ()
{
	FILE *fp;
	char str[256];
	printf("Please input sentence to file:\n");
	fgets(str,255,stdin);
	fp=fopen("myfile.txt","w");
	if(!fp)
	{
		printf("Cannot open the file.\n");
		exit(-1);
	}
	fputs(str,fp);
	fclose(fp);
}
