#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 30 
void rmb_units(int k);
void big_write_num(int l);
void main()
{
	char c[N],*p;
	int a,i,j,len,len_integer=0,len_decimal=0;   //len_integer�������ֳ���,len_decimalС�����ֳ���
	printf("*************************************************\n");
	printf("  �������ǽ�����������Сд���ת�������Ĵ�д���!\n");
	printf("*************************************************\n");
	printf("�����밢��������Сд���: ��");
	scanf("%s",c);
	printf("\n");
	p=c;
	len=strlen(p);
	/*����������ֵĳ���*/ 
	for(i=0;i<=len-1 && *(p+i)<='9' && *(p+i)>='0';i++);
	if(*(p+i)=='.' || *(p+i)=='\0')   //*(p+i)=='\0'ûС��������
		len_integer=i;
	else
	{
		printf("\n���������������ֺ��д�����ַ�!\n");
		exit(-1);
	}
	if(len_integer>13)
	{
		printf("������Χ��������ڣ������������13λ!\n");
		printf("�������ִ��,ע�⣺�������ڲ���ֻ�������ֵ����Ĵ�д!\n");
	}
	printf("��%s �Ĵ�д��",c);
	/*ת����������*/
	for(i=0;i<len_integer;i++)
	{
		a=*(p+i)-'0';
		if(a==0)
		{
			if(i==0)
			{
				if(*(p+1)!='.' && *(p+1)!='\0' && *(p+1)!='0')
				{
					printf("\n�������󣡵�һλ�����������зǷ��ַ�������!\n");
					printf("�������ִ��,ע�⣺�������ֵ�ʣ�²��ֽ�������!\n");
				}
				printf("��Ԫ"); 
				break;   
			}
			else if(*(p+i+1)!='0' && i!=len_integer-5 && i!=len_integer-1 && i!=len_integer-9) //Ԫ����λΪ0ʱѡ�񲻼���                           
			{
				printf("��"); 
				continue;                            
			}
			else if(i==len_integer-1 || i==len_integer-5 || i==len_integer-9)   //Ԫ���ڵ�λ���ܵ�
			{
				rmb_units(len_integer+1-i);
				continue;
			}
			else
				continue;
		}
		big_write_num(a);          //�������������Ĵ�д���
		rmb_units(len_integer+1-i);   //����һ��ҵ�λ���Ĵ�д���
	}
	/*���С�����ֵĳ���*/
	len_decimal=len-len_integer-1;
	if(len_decimal<0)//��ֻ���������֣�����������������
	{
		len_decimal=0;
		printf("��");   
	}
	if(len_decimal>2)      //ֻȡ��λС��
		len_decimal=2;
	p=c;
	/*ת��С������*/
	for(j=0;j<len_decimal;j++)     
	{
		a=*(p+len_integer+1+j)-'0'; //��λ��С�����֣��ȼ���a=*(p+len-len_decimal+j)-'0'; 
		if(a<0 || a>9)
		{
			printf("\n��������С�����ֺ��д�����ַ�!\n");
			system("pause");
			exit(-1);
		} 
		if(a==0)
		{
			if(j+1<len_decimal)
			{
				if(*(p+len_integer+j+2)!='0')       
					printf("��");
				else
				{
					printf("��");
					break;
				}
			}
			continue;
		}
		big_write_num(a);
		rmb_units(1-j);
	}
	printf("\n\n");      
}
/*����һ��ҵ�λ���Ĵ�д���*/
void rmb_units(int k)
{
	//�൱��const char rmb_units[]="fjysbqwsbqisbqw";
	//"�ֽ�Ԫʰ��Ǫ��ʰ��Ǫ��ʰ��Ǫ��";
	switch(k)
	{
	case 3:case 7:case 11: printf("ʰ");break;
	case 4:case 8:case 12: printf("��");break;
	case 5:case 9:case 13: printf("Ǫ");break;
	case 6: case 14:       printf("��");break;
	case 10:               printf("��");break;
	case 2:                printf("Ԫ");break;
	case 1:                printf("��");break;
	case 0:                printf("��");break;
	default:               break;
	}
}
/*�������������Ĵ�д���*/
void big_write_num(int l)
{
	//�൱��const char big_write_num[]="0123456789";
	//"��Ҽ��������½��ƾ�"
	switch(l)
	{
	case 0:printf("��");break;
	case 1:printf("Ҽ");break;
	case 2:printf("��");break;
	case 3:printf("��");break;
	case 4:printf("��");break;
	case 5:printf("��");break;
	case 6:printf("½");break;
	case 7:printf("��");break;
	case 8:printf("��");break;
	case 9:printf("��");break;
	default:break;
	}
}
