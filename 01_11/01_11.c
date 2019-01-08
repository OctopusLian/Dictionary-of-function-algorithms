#include <stdio.h>
void main()
{
	printf ("字符: %c %c\n",'A',97);
	printf ("整数: %d %ld\n",2010, 6553500L);
	printf("以十、八、十六进制输出:%d %o\n",-1,-1);
	printf ("以空格填充: %12d,以0填充:%012d\n",2010,2010);
	printf ("以不同进制输出: %d %x %o %#x %#o\n",100,100,100,100,100);
	printf ("浮点数: %4.2f %+.0e %E \n",9.825,9.825,9.825);
	printf ("输出%: %f%%\n",1.0/3);
	printf ("字符串:%s\n", "How are you!");
}
