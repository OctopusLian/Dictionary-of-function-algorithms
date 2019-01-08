#include<stdio.h>
void main()
{
	FILE * fp;
	char readbuf[81],writebuf[]="Computer Science.";
	fp = fopen ("myfile.txt","w+");
	if (!fp) 
		printf ("Cannot open the file!");
	else 
	{
		fputs (writebuf,fp);
		fflush (fp); 
		rewind(fp);
		fgets (readbuf,80,fp);
		puts (readbuf);
		fclose (fp);
	}
}
