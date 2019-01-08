#include <stdio.h>
void main()
{
	char sentence[]="3 plus 5 equals 8!";
	int a,b,c;
	sscanf(sentence,"%d %*s %d %*s %d",&a,&b,&c);
	printf("%d+%d=%d\n",a,b,c);
}
