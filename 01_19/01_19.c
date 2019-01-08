#include <stdio.h>
void main()
{
	FILE * fp;
	char buf[81]="C programmer";
	fp=fopen ("file.txt","w");
	if (fp==NULL) 
		printf("Open file error!");
	else 
	{
		fwrite (buf,1,80,fp);
		fclose (fp);
	}
}
