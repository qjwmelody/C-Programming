#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct intNode
{
	int value;
	intNode *next;
};
intNode *creatList(int n)//创建整数有序链表
{
	intNode *h,*tail,*p;
	int i;
	h=tail=NULL;
	printf("Input data\n");
	for(i=0;i<n;i++)
	{
		p=(intNode *)malloc(sizeof(intNode));
		scanf("%d",&p->value);
		if(h==NULL) h=tail=p;
		else tail=tail->next=p;
	}
	if(tail) tail->next=NULL;
	return h;
}
void output(intNode *q)//输出链表
{
	while(q!=NULL)
	{
		printf("%d\t",q->value);
		q=q->next;
	}
	printf("\n");
}
intNode *combine(intNode *h1,intNode *h2)
{
	intNode *q,*head,*m,*p1,*p2;
	p1=h1;
	p2=h2;
	head=m=NULL;
	while(p1!=NULL&&p2!=NULL)
	{
		q=(intNode *)malloc(sizeof(intNode));
		if(p1->value<p2->value) 
		{
			q->value=p1->value;
			p1=p1->next;
		}
		else
		{
			q->value=p2->value;
			p2=p2->next;
		}
		if(m==NULL) head=m=q;
		else
		{
			m->next=q;
			m=m->next;
		}
	}
	while(p1!=NULL)
	{
		q=(intNode *)malloc(sizeof(intNode));
		q->value=p1->value;
		p1=p1->next;
		if(m==NULL) head=m=q;
		else
		{
			m->next=q;
			m=m->next;
		}
	}
	while(p2!=NULL)
	{
		q=(intNode *)malloc(sizeof(intNode));
		q->value=p2->value;
		p2=p2->next;
		if(m==NULL) head=m=q;
		else
		{
			m->next=q;
			m=m->next;
		}
	}
	if(m!=NULL) 
		m->next=NULL;
	return head;
}
void main()
{
	intNode *p,*h1,*h2;
	int n;
	printf("请输入链表表元个数\n");
	scanf("%d",&n);
	h1=creatList(n);output(h1);
	h2=creatList(n);output(h2);
	printf("合并后的链表为\n");
	p=combine(h1,h2);
	output(p);
	system("pause\n");
}

