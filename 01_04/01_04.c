#include <stdio.h>
void main()
{
	FILE *file;
	char str[80];
	file=fopen ("myfile.txt" , "r");
	if (file==NULL) 
		printf ("cannot open file!");
	else
	{
		while(fgets (str , 80 , file)!=NULL)
			printf("%s",str);
		printf("\n");
		fclose (file);
	}
}
