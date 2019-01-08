#include<stdio.h>
#include<stdlib.h>
void main ()
{
	FILE * fp;
	long len;
	char buf[81];
	fp=fopen ("myfile.txt","rb");
	if (!fp) 
	{
		printf("Cannot open the file!");
		exit(-1);
	}
	else
	{
		fgets(buf,80,fp);
		printf("Contents of buf:%s",buf);
		fseek (fp, 0L, SEEK_END);
		len=ftell(fp);
		fclose (fp);
		printf ("Length of myfile.txt is %d bytes.\n",len);
	}
}
