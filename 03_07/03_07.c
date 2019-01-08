#include <stdio.h>
#include <string.h>
void main ()
{
	char s1[]= "tsinghua",s2[]="peking";
	char d1[30],d2[30],d3[30];
	/*因为8<=s1的长度，所以strncpy函数不添加最后的空字符*/
	strncpy (d1,s1,8);
	printf("d1:%s\n",d1);	/*不添加结束标志的输出结果*/
	strncpy (d1,s1,8);
	d1[8]='\0';				/*添加结束标志*/
	printf("d2:%s\n",d1);	/*添加结束标志后的输出结果*/
	/*10大于s2的长度，不需要添加空字符*/
	strncpy(d3,s2,10);
	printf("d3:%s\n",d3);
}
