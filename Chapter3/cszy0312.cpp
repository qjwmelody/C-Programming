#include<stdio.h>
void main()
{
	int n,j,k,space;
	printf("����һ��������\n");
	scanf("%d",&n);
	for(k=1;k<=2*n-1;k++)
	printf(" *");
	printf("\n");
	for(j=n-1;j>=1;j--)
		{
			for(k=1;k<=4*n-2;k++)
			if((j==1&&k==2*n)||(j!=1&&(k==2*n-2*j+2||k==2*n+2*j-2))) printf("*");
			else printf(" ");
			printf("\n");
	    }
	
}
			
