#include<stdio.h>
#include<string.h>
int main()
{
	char pro[100];
	int a[100],i,m,n;
	printf("输入源程序正文\n");
	gets(pro);
	for(i=0,m=n=0;i<strlen(pro);i++)
	{
		if(pro[i]=='(') m++;
		else if(pro[i]==')') m--;
		else if(pro[i]=='{') n++;
		else if(pro[i]=='}') n--;
	}
	if(m!=0&&n==0)
		printf("圆括号不匹配\n");
	else if(n!=0&&m==0)
		printf("花括号不匹配\n");
	else if(m!=0&&n!=0)
		printf("圆括号和花括号都不匹配\n");
	else if(m==0&&n==0)
		printf("括号匹配\n");
	return 0;
} 