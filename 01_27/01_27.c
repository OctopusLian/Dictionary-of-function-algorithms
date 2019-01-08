#include <stdio.h>
void main() 
{ 
	FILE *fp; 
	char ch; 
	int i;
	fp=fopen("myfile.txt", "w"); 
	for(i=0;i<26;i++)
		fputc('a'+i,fp);
	rewind(fp);
	ch=fgetc(fp); 
	printf("%c\n",ch); 
	if (ferror(fp)) 
	{ 
		printf("Error reading from myfile.txt\n"); 
		clearerr(fp); 
	} 
	fclose(fp); 
}
