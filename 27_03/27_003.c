#include <stdio.h>
const int leapYear[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const int noLeapYear[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int isLeapYear( int iYear )
{//�ж��Ƿ�Ϊ����
	if( iYear < 0 )
		return 0;	
	if( !(iYear % 400) )
		return 1;
	if( !( iYear % 100 ))
		return 0;
	if( !( iYear % 4 ) )
		return 1;
	return 0;
}
int GetDayInYear( int iYear, int iMonth, int iDay )
{//����ĳ��ĳ��ĳ����һ���еĵڼ���
	int i;
	int iCurMonth = iMonth - 1;
	int iIndex = 0;
	if( iYear < 0 )
		return -1;
	if( iMonth > 13 || iMonth < 1 )
		return -1;
	if( isLeapYear( iYear ) )//����
	{
		for( i = 0; i < iCurMonth; i++ )
		{
			iIndex += leapYear[i];
		}
		if( iDay > leapYear[i] || iDay < 1 )
			return -1;
		iIndex += iDay;
	}
	else//��������
	{
		for( i = 0; i < iCurMonth; i++ )
		{
			iIndex += noLeapYear[i];
		}
		if( iDay > noLeapYear[i] || iDay < 1 )
			return -1;
		iIndex += iDay;
	}
	return iIndex;
}
void main( )
{
	int year,month,day;
	printf("�������ꡢ�¡���:");
	scanf("%d%d%d",&year,&month,&day);
	printf( "%d��%d��%d��������ĵ�%d��.\n" ,year,month,day,GetDayInYear( year, month, day ) );
}