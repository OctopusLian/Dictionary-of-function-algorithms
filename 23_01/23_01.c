#include<stdio.h>
void main()
{  
	int n,c1,c2,c3;
	printf("������һ������:");
	scanf("%d",&n);
	c1 = n%3 ==0;
	c2 = n%5 ==0;
	c3 = n%7 ==0;
	switch((c1<<2)+(c2<<1)+c3)
	{
	case 0:
		printf("���ܱ�3,5,7����.\n"); 
		break;
	case 1: 
		printf("ֻ�ܱ�7����.\n"); 
		break;
	case 2:
		printf("ֻ�ܱ�5����.\n");
		break;
	case 3:
		printf("���Ա�5,7����.\n");
		break;
	case 4: 
		printf("ֻ�ܱ�3����.\n");
		break;
	case 5:
		printf("���Ա�3,7����.\n");
		break;
	case 6: 
		printf("���Ա�3,5����.\n");
		break;
	case 7: 
		printf("���Ա�3,5,7����.\n");
		break;
	}
} 
