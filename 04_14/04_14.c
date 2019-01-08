#include <stdio.h>
#include <stdlib.h>
void main ()
{
	FILE * fp;
	fp=fopen ("myfile.txt","r");
	if (fp==NULL) 
	{
		printf("open file error.\n");
		abort();
	}
	printf( "This will never be executed!\n" );
	fclose (fp);
}
