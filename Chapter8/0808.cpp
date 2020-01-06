#include<stdio.h> 
#include<malloc.h> 

FILE *fp=NULL; 
char fname[40]; 

struct Node 
{ 
	int value; 
	int count; 
	Node *next; 
} *head=NULL; 

void insert(int c, Node *head) 
{ 
	Node *p=head->next, *w=head; 
	while(p&&p->value<c) {w=p;p=p->next;} 
	if(p) 
	if(p->value==c) p->count++; 
	else 
	{ 
		Node *m=NULL; 
		m=(Node *)malloc(sizeof(Node)); 
		m->value=c; 
		m->count=1; 
		m->next=p; 
		w->next=m; 
	} 
	else 
	{ 
		Node *m=NULL; 
		m=(Node *)malloc(sizeof(Node)); 
		m->value=c; 
		m->count=1; 
		m->next=NULL; 
		w->next=m; 
	} 
} 


void write(Node *head) 
{ 
	Node *p=head->next; 
	if (!p) printf("无有效输入！"); 
	while(p) 
	{ 
		printf("值：%-10d次数：%d\n", p->value,p->count); 
		Node *w=p; 
		p=p->next; 
		free(w); 
	} 
} 


int main() 
{ 
	int c; 
	head=(Node*)malloc(sizeof(Node)); 
	head->next=NULL; 
	//输入文件名 
	while (!fp) 
	{ 
		printf("INPUT FILE NAME:\n"); 
		scanf("%s%*c",fname); 
		if ((fp=fopen(fname,"r"))==NULL) printf("FILE OPEN ERROR!\n"); 
	} 
	//读入整数 
	while ((fscanf(fp, "%d", &c))==1) 
	{ 
		insert(c,head); 
	} 
	fclose(fp); 

	*/ //输出 
	write(head); 
	return 0; 
}