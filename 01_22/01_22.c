#include<stdio.h>
void main()
{
	if(remove("myfile.txt")!=0)
		printf("remove file error.\n");
	else
		printf("myfile.txt was removed successfully.\n");
}
