#include <stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	float chinese,math,english;
	fp=fopen ("myfile.txt","w+");
	if(!fp)
	{
		printf("cannot open file!");
		exit(-1);
	}
	fprintf (fp, "%.2f\n",80.5);
	fprintf(fp,"%.2f\n",89.5);
	fprintf(fp,"%.2f\n",83.5);
	rewind(fp);
	fscanf(fp,"%f",&chinese);
	fscanf(fp,"%f",&math);
	fscanf(fp,"%f",&english);
	printf("%f,%f,%f\n",chinese,math,english);
	fclose (fp);
}
