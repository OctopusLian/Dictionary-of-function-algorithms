#include <stdio.h>
void main ()
{
	FILE * fp;
	int n=0;
	char ch;
	fp=fopen ("myfile.txt","rb");
	if (fp==NULL) 
		printf("Open file error!");
	else
	{
		while (!feof(fp))
		{
			ch=fgetc (fp);
			putchar(ch);
			n++;
		}
		fclose (fp);
	}
	printf ("This file contain %d bytes.\n", n-1);
}
