#include <stdio.h>
void main ()
{
	int flag;
	char oldname[]="beijing.txt";
	char newname[]="shanghai.txt";
	flag=rename( oldname , newname );
	if ( flag==0 )
		puts ( "File has been successfully renamed" );
	else
		printf( "Rename error!" );
}
