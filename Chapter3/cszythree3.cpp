#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,c,d;
	for(a=100;a<999;a++)
	{	b=a/100;
	    c=(a-b*100)/10;
		d=a%10;
		if(a==b*b*b+c*c*c+d*d*d) printf("%d\n",a);
	}
	system("pause");
}