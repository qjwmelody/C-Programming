#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,c;
	printf("输入一个整数\n");
	scanf("%d",&a);
	b=a;
	c=0;
	while(b!=0)
	{
		c=c*10+b%10;
		b=b/10;
	}
	if(a==c) printf("是回文数\n");
	else printf("不是回文数\n");
	system("pause");
}
