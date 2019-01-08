#include <stdio.h>
void main() 
{
	FILE *fp;
	char word[30];
	int  i, numread, numwritten;
	for ( i=0; i < 26; i++ )
		word[i]=(char)('A' +i);
	if( (fp=fopen( "myfile.dat", "wb" ))!=NULL )
	{
		numwritten=fwrite( word, sizeof( char ), 26, fp );
		printf( "Write %d items successfully!\n", numwritten );
		fclose( fp );
	}
	else
		printf( "Cannot open the file to read.\n" );
	if( (fp=fopen( "myfile.dat", "rb" ))!=NULL )
	{
		
		numread=fread( word, sizeof( char ), 26, fp );
		printf( "Number of items:%d\n", numread );
		printf( "Contents of buffer:%.26s\n",word);
		fclose( fp );
	}
	else
		printf( "Cannot open the file to write.\n" );
}
