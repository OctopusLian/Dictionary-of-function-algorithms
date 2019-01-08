#include <stdio.h>
void main()
{
	   FILE *fp;
	   char str[81];
	   int  result;
	   fp=fopen( "fseek.dat", "w+" );
	   if( fp==NULL )
		   printf( "Cannot open the file.\n" );
	   else
	   {
		   fputs("张艳,女,中学教师,河南大学",fp);
		   result = fseek( fp, 0, SEEK_SET);
		   if( result )
			   printf( "Fseek failed!" );
		   else
		   {
			   fgets(str,80,fp);
			   printf( "%s\n", str );
		   }
		   fclose( fp );
	   }
}
