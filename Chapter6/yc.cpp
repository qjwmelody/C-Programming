#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char insert(char *p,char *q,int m)
{
	int l1,l2,i;
	l1=strlen(p);
	l2=strlen(q);
	for(i=l1;i>=m;--i)
	{
		*(p+i+l2)=*(p+i);
	}
	for(i=0;i<l2;i++)
	{
		*(p+m+i)=*(q+i);
	}
	return *p;
}
void main()
{
	char p[40]="abcde";
	char *q="ABCD";
	int m=3;
	insert(p,q,m);
	puts(p);
	system("pause");
}
