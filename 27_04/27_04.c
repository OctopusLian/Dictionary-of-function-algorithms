/*����ͷ�ļ�*/
#include<stdio.h>
#include<string.h>
/*����˳��ջ��������ʵ�ֺ���*/
typedef char DataType;
#include"SeqStack.h"
#define MAXSIZE 50
/*������ջ����*/
typedef struct
{
	float data[MAXSIZE];
	int top;                  
}OpStack;  
/*��������*/
void TranslateExpress(char s1[],char s2[]);
float ComputeExpress(char s[]);
void main()
{
	char a[MAXSIZE],b[MAXSIZE];
	float f;
	printf("������һ���������ʽ��\n");
	gets(a);
	printf("��׺���ʽΪ��%s\n",a);
	TranslateExpress(a,b);
	printf("��׺���ʽΪ��%s\n",b);
	f=ComputeExpress(b);
	printf("��������%f\n",f);
}   
float ComputeExpress(char a[])
/*�����׺���ʽ��ֵ*/
{
	OpStack S; 				/*����һ��������ջ*/
	int i=0,value;
	float x1,x2;
	float result;
	S.top=-1; 					/*��ʼ��ջ*/
	while(a[i]!='\0') 				/*����ɨ���׺���ʽ�е�ÿ���ַ�*/
	{
		if(a[i]!=' '&&a[i]>='0'&&a[i]<='9') 	/*�����ǰ�ַ��������ַ�*/
		{
			value=0;
			while(a[i]!=' ') 				/*������ǿո�˵�������ַ�����λ�����ϵ������ַ�*/
			{
				value=10*value+a[i]-'0';
				i++;
			}
			S.top++;
			S.data[S.top]=value; 		/*����֮�����ֽ�ջ*/
		}		
		else							/*�����ǰ�ַ��������*/
		{
			switch(a[i]) 				/*��ջ�е����ֳ�ջ���Σ�Ȼ���õ�ǰ��������������㣬�ٽ������ջ*/
			{		
			case '+':
				x1=S.data[S.top];
				S.top--;
				x2=S.data[S.top];
				S.top--;
				result=x1+x2;
				S.top++;
				S.data[S.top]=result;
				break;
			case '-':
				x1=S.data[S.top];
				S.top--;
				x2=S.data[S.top];
				S.top--;
				result=x2-x1;
				S.top++;
				S.data[S.top]=result;
				break;
			case '*':
				x1=S.data[S.top];
				S.top--;
				x2=S.data[S.top];
				S.top--;
				result=x1*x2;
				S.top++;
				S.data[S.top]=result;
				break;
			case '/':
				x1=S.data[S.top];
				S.top--;
				x2=S.data[S.top];
				S.top--;
				result=x2/x1;
				S.top++;
				S.data[S.top]=result;
				break;
			}
			i++;
		}
	}
	if(!S.top!=-1)						/*���ջ���գ��������ջ��������*/
	{
		result=S.data[S.top];
		S.top--;
		if(S.top==-1)
			return result;
		else
		{
			printf("���ʽ����");
			exit(-1);
		}
	}
}
void TranslateExpress(char str[],char exp[])
/*����׺���ʽת��Ϊ��׺���ʽ*/ 
{
	SeqStack S; 				/*����һ��ջ�����ڴ�������*/
	char ch;   
	DataType e;
	int i=0,j=0;
	InitStack(&S);
	ch=str[i];
	i++;
	while(ch!='\0')				/*����ɨ����׺���ʽ�е�ÿ���ַ�*/
	{
		switch(ch)
		{
		case'(': 				/*�����ǰ�ַ��������ţ������ջ*/
			PushStack(&S,ch);
			break;
		case')': 				/*����������ţ���ջ�еĲ�������ջ���������������exp��*/
			while(GetTop(S,&e)&&e!='(')    
			{
				PopStack(&S,&e);
				exp[j]=e;
				j++;
			}
			PopStack(&S,&e);	/*�������ų�ջ*/
			break;
		case'+':
		case'-': 				/*�����������'+'��'-'����Ϊ�����ȼ�����ջ������������ȼ��������Ƚ�ջ���ַ���ջ���������������exp�У�Ȼ�󽫵�ǰ�������ջ*/
			while(!StackEmpty(S)&&GetTop(S,&e)&&e!='(')
			{
				PopStack(&S,&e);
				exp[j]=e;
				j++;
			}
			PushStack(&S,ch);	/*��ǰ�������ջ*/
			break;
		case'*': 				/*�����������'*'��'/',�Ƚ�ͬ���������ջ������������exp�У�Ȼ�󽫵�ǰ���������ջ*/
		case'/':
			while(!StackEmpty(S)&&GetTop(S,&e)&&e=='/'||e=='*')
			{
				PopStack(&S,&e);
				exp[j]=e;
				j++;
			}
			PushStack(&S,ch);	/*��ǰ�������ջ*/
			break;
		case' ': 				/*��������ո񣬺���*/
			break;
		default: 				/*����������ǲ��������򽫲�����ֱ����������exp�У�����������һ���ո������ָ������ַ�*/
			while(ch>='0'&&ch<='9')
			{
				exp[j]=ch;
				j++;
				ch=str[i];
				i++;
			}
			i--;
			exp[j]=' ';
			j++;
		}
		ch=str[i];				/*������һ���ַ���׼������*/
		i++;
	}
	while(!StackEmpty(S)) 		/*��ջ������ʣ����������ջ����������exp��*/
	{
		PopStack(&S,&e);
		exp[j]=e;
		j++;
	}
	exp[j]='\0';
}


