#include <stdio.h>
#include <stdlib.h>
void main() 
{
	FILE *fp;
	char buf[30];
	int  i,n;
	if( (fp=fopen( "myfile.dat", "rb" ))!=NULL )
	{
		n=fread( buf, sizeof( char ), 26, fp );
		printf( "Number of items:%d\n", n );
		printf( "Contents of buffer:%.26s\n", buf );
		fclose( fp );
	}
	else
		printf( "Cannot open the file.\n" );
}
