#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,c;
	printf("����һ������\n");
	scanf("%d",&a);
	b=a;
	c=0;
	while(b!=0)
	{
		c=c*10+b%10;
		b=b/10;
	}
	if(a==c) printf("�ǻ�����\n");
	else printf("���ǻ�����\n");
	system("pause");
}
