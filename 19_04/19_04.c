#include<stdio.h>
#include<malloc.h>
typedef struct Node	/*���������������Ͷ���*/
{
	int data;
	struct Node *lchild,*rchild;
}BiTreeNode,*BiTree;
BiTree BSTSearch(BiTree T,int x);
int BSTInsert(BiTree *T,int x);
void InOrderTraverse(BiTree T);
void main()
{
	BiTree T=NULL,p;
	int table[]={55,33,44,66,99,77,88,22,11};
	int n=sizeof(table)/sizeof(table[0]);
	int x,i;
	for(i=0;i<n;i++)
		BSTInsert(&T,table[i]);
	printf("������������������õ�������Ϊ:\n");
	InOrderTraverse(T);
	printf("\n������Ҫ���ҵ�Ԫ��:");
	scanf("%d",&x);
	p=BSTSearch(T,x);
	if(p!=NULL)
		printf("��������������:Ԫ��%d���ҳɹ�.\n",x);
	else
		printf("��������������:û���ҵ�Ԫ��%d.\n",x);
}
BiTree BSTSearch(BiTree T,int x)
/*�����������Ĳ��Ҳ�����
����ҵ�Ԫ��x���򷵻�ָ�����ָ�룬���򷵻�NULL*/
{
	BiTreeNode *p;
	if(T!=NULL)						/*���������������Ϊ��*/
	{
		p=T;
		while(p!=NULL)
		{
			if(p->data==x)	/*����ҵ����򷵻�ָ��ý���ָ��*/
				return p;
			else if(x<p->data)	/*����ؼ���С��pָ��Ľ���ֵ�������������в���*/
				p=p->lchild;
			else
				p=p->rchild;	/*����ؼ��ִ���pָ��Ľ���ֵ�������������в���*/
		}
	}
	return NULL;
}
int BSTInsert(BiTree *T,int x)
/*�����������Ĳ������.
������в�����Ԫ��x����x���뵽��ȷ��λ�ò�����1�����򷵻�0*/
{
	BiTreeNode *p,*cur,*parent=NULL;
	cur=*T;
	while(cur!=NULL)
	{
		if(cur->data==x)	/*����������д���Ԫ��Ϊx�Ľ�㣬�򷵻�0*/
			return 0;
		parent=cur;				/*parentָ��cur��ǰ�����*/
		if(x<cur->data)		/*����ؼ���С��pָ��Ľ���ֵ�������������в���*/
			cur=cur->lchild;
		else
			cur=cur->rchild;			/*����ؼ��ִ���pָ��Ľ���ֵ�������������в���*/
	}
	p=(BiTreeNode*)malloc(sizeof(BiTreeNode));	/*���ɽ��*/
	if(!p)
		exit(-1);
	p->data=x;
	p->lchild=NULL;
	p->rchild=NULL;
	if(!parent)						/*���������Ϊ�գ����һ����Ϊ�����*/
		*T=p;
	else if(x<parent->data)		/*���xС��parentָ��Ľ��Ԫ�أ���x��Ϊparent������*/
		parent->lchild=p;
	else						/*���x����parentָ��Ľ��Ԫ�أ���x��Ϊparent���Һ���*/
		parent->rchild=p;
	return 1;	
}
void InOrderTraverse(BiTree T)
/*�����������������*/
{
    if(T)								/*���������������Ϊ��*/
	{
		InOrderTraverse(T->lchild);		/*�������������*/
        printf("%4d",T->data); 			/*���ʸ����*/
        InOrderTraverse(T->rchild); 	/*�������������*/
    }
}
