#include<stdio.h>
void main ()
{
	FILE * fp;
	int buf[30]={1,2,3,4,5,6,7,8,9,10},i;
	fp = fopen ("myfile.dat","wb+");
	fwrite(buf,sizeof(int),10,fp);
	rewind (fp);
	fread (buf,sizeof(int),10,fp);
	fclose (fp);
	for(i=0;i<10;i++)
		printf("%4d",buf[i]);
	printf("\n");
}
