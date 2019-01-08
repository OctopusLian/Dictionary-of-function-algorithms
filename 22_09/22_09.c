#include<stdio.h>
void hanoi(int n,char one,char two,char three);
void move(char x,char y);
void main() 
{ 
	int n; 
	printf("������Բ�̵ĸ���:"); 
	scanf("%d",&n);
	printf("�ƶ���������:\n"); 
	hanoi(n,'A','B','C'); 
} 
void move(char x,char y) 
{ 
	printf("%c-->%c\n",x,y);
}
void hanoi(int n,char one ,char two,char three)
{ 
	if(n==1) 
		move(one,three); 
	else
	{ 
		hanoi(n-1,one,three,two); 
		move(one,three); 
		hanoi(n-1,two,one,three);
	}
} 