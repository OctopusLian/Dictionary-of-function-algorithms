#include<stdio.h>
#include<stdlib.h>
void main ()
{
	FILE * fp;
	fp=fopen("myfile.txt","r");
	if(!fp)
	{
		printf("file open error.\n");
		exit(-1);
	}
	while(!feof(fp))
	{
		fputc('a',fp);
		if(ferror(fp))
		{
			printf("file error!\n");
			exit(-1);
		}
	}
	printf ("no error found.\n");
	fclose (fp);
}
