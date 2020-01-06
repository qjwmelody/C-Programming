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
intNode *searchMin(intNode *h,intNode **m)//找到最小表元
{
	intNode *min,*p,*q,*preq;
	min=h;
	preq=q=NULL;
	for(p=h;p!=NULL;q=p,p=p->next)
	{
		if(min->value>p->value)
		{
			preq=q;
			min=p;
		}
		
	}
	*m=preq;
	return min;
}
intNode *deletMin(intNode **h)//删除最小表元
{
	intNode *p,*q;
	p=searchMin(*h,&q);
	if(q==NULL) *h=p->next;
	else 
	{
		q->next=p->next;
	}
	free(p);
	return *h;
}
void main()
{
	struct intNode *p,*q;
	int n;
	printf("输入表元个数\n");
	scanf("%d",&n);
	p=creatList(n);
	output(p);
	q=deletMin(&p);
	output(q);
	system("pause\n");
}