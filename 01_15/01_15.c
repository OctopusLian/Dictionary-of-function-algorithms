#include <stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen ("myfile.txt","w");
	if(!fp)
	{
		printf("cannot open file!");
		exit(-1);
	}
	fprintf (fp, "chinese:%.2f math:%.2f english:%.2f.\n",
		80.5,89.5,83.5);
	fclose (fp);
}
