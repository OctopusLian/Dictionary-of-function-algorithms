#include<stdio.h>
const int COCKPRICE = 3; /*һֻ�����ļ۸�*/ 
const int HENPRICE = 5;  /*һֻĸ���ļ۸�*/ 
const int CHICKS = 3;   /*һԪǮ�����С������*/ 
void Scheme(int money, int chooks);/*���㲢������򷽰�*/
void main()
{
	int money = 100;/*Ǯ������*/
	int chooks = 100;/*��������*/
	printf("���򷽰�����:\n");
	Scheme(money, chooks);/*���㲢������򷽰�*/     
}
void Scheme(int money, int chooks) 
/*���㲢������򷽰�*/
{
	int maxCock = money / COCKPRICE;    
	int maxHen = money / HENPRICE;    
	int maxChick = chooks;        
	int cock, hen, chick;
	for (cock=0; cock<maxCock; ++cock)/*ö�ٹ����Ŀ�������*/
	{
		for (hen=0; hen<maxHen; hen++)/*ö��ĸ���Ŀ�������*/
		{
			for (chick=0; chick<maxChick; chick++)/*ö��С���Ŀ�������*/
			{
				/*Լ������*/
				if (0 == chick%CHICKS && cock + hen + chick == chooks 
					&& COCKPRICE*cock + HENPRICE*hen + chick/CHICKS == money) 
				{
					printf("����: %2d, ĸ��: %2d, С��: %2d\n", cock, hen, chick);
				}
			}
		}
	}
}
