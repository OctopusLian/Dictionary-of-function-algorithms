#include<stdio.h>
void main()
{
	char name[20];
	float chinese,math,english;
	printf("�������������:");
	scanf("%s",name);  
	printf("������������ģ���ѧ��Ӣ��ĳɼ�: ");
	scanf("%f,%f,%f",&chinese,&math,&english);
	printf("���������%s.\n",name);
	printf("����  ��ѧ  Ӣ��\n");
	printf("%.2f %.2f %.2f\n",chinese,math,english);
}
