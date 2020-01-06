#include<stdio.h>
int gcd(int a,int b)
{
	int d=0;
	printf("%d %d %d\n",++d,a,b);
	if(a==b) return a;
	if(a>b) return gcd(a-b,b);
	return gcd(a,b-a);
}
int main()
{
	int x,y,min;
	printf("输入两个整数\n");
	scanf("%d%d",&x,&y);
	min=gcd(x,y);
	printf("gcd(%d,%d)=%d\n",x,y,min);
}