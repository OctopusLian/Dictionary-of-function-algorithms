#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	if((fp=fopen("myfile.dat","rb"))==NULL)
	{
		printf("cannot open the file.\n.");
		exit(-1);
	}
	if(fclose(fp))
	{
		printf("file close error.\n");
		exit(-1);
	}
}
