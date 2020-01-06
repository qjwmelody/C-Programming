#include<stdio.h>
#define MAXN 1000
int a[MAXN][MAXN];

int main()
{	int n, tot=0, x=0, y=-1;
	scanf("%d", &n);
	while (tot<n*n)
	{
		while(y+1<n&&!a[x][y+1]) a[x][++y]=++tot;
		while(x+1<n&&!a[x+1][y]) a[++x][y]=++tot;
		while(y-1>=0&&!a[x][y-1]) a[x][--y]=++tot;
		while(x-1>=0&&!a[x-1][y]) a[--x][y]=++tot; 
	}
	for (int i=0;i<n;i++)
	{	
		for (int j=0;j<n;j++) printf("%4d", a[i][j]);
		printf("\n");
	}
} 
