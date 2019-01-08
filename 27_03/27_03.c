#include<stdio.h>
main()
{
	int whatday(int,int,int);
	int year,month,day,ans;
	printf("请输入年 月 日（空格隔开）: ");
	scanf("%d%d%d",&year,&month,&day);
	ans=whatday(year,month,day);
	printf("%d年%d月%d日是%d年的第%d天。\n",year,month,day,year,ans);
}
int whatday(int year,int month,int day) /*计算给定年月日的某一天是当年的第几天*/
{
	int isleap(int);
	int i,j,k,ans=0;
	switch(month)
	{
	case 1:ans=0;break;
	case 2:ans=31;break;
	case 3:ans=59;break;
	case 4:ans=90;break;
	case 5:ans=120;break;
	case 6:ans=151;break;
	case 7:ans=181;break;
	case 8:ans=212;break;
	case 9:ans=243;break;
	case 10:ans=273;break;
	case 11:ans=304;break;
	case 12:ans=334;break;
	}
	ans+=day;
	if(((year%100!=0&&year%4==0)||year%400==0)&&month>2)
		ans++;
	return ans;
}
