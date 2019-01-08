#include<stdio.h>
void main()
{
	char name[20];
	float chinese,math,english;
	printf("请输入你的姓名:");
	scanf("%s",name);  
	printf("请输入你的语文，数学，英语的成绩: ");
	scanf("%f,%f,%f",&chinese,&math,&english);
	printf("你的姓名：%s.\n",name);
	printf("语文  数学  英语\n");
	printf("%.2f %.2f %.2f\n",chinese,math,english);
}
