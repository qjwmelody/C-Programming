#include<stdio.h>
int isCom(int n)
{
	int i,sum;
	sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0) sum=sum+i;
	}
	return n==sum?1:0;
}
int main()
{
	int a[1000],m,j,k;
	j=0;
	for(m=1;m<1000;m++)
	{
		if(isCom(m)==1)
		{
			a[j]=m;
			j++;
		}
	}
	printf("1000之内所有的完全数为：\n");
	for(k=0;k<=j-1;k++)
	{
		printf("%d\n",a[k]); 
	}
	return 0;
}