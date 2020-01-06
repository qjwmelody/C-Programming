//附解二 
#include<stdio.h>
#define MAXN 1000
int x[MAXN];  //仅考虑数组中元素为整型。double输出存在格式问题。 
int n,m,j=0;

void exchange(int a) //从第a个数开始的前m个数与后m个数的交换 
{
	for (int i=0;i<m;i++)
		{	int temp;
			temp = x[a+i+m];
			x[a+i+m] = x[a+i];
			x[a+i] = temp;
		}
}
void zerodelete(int a)	//除去最后一次交换可能产生的零 
{
	for (int i=0;i<m;i++) x[a+i]=x[a+i+j*m+m-n];
}

int main()
{	
	scanf("%d%d", &n, &m);
	for (int i=0;i<n;i++) scanf("%d", &x[i]); //输入 
	
	while (m<n-j*m) {exchange(j*m);j++;};
	zerodelete(n-m);
	
	for (int i=0;i<n;i++) printf("%d ", x[i]); //输出 
}
/*题目用意大概是不引入新数组临时存储原数组中元素。
另有定义另外一数组用于标记的做法，如违背要求，不妨改为二位数组。
完整程序如下： 
#include<stdio.h>
#define MAXN 1000
int x[MAXN];  //仅考虑数组中元素为整型。double输出存在问题。 
int y[MAXN];
int main()
{	int n, m;
	scanf("%d%d", &n, &m);
	for (int i=0;i<n;i++) scanf("%d", &x[i]);
	
	if (2*m==n)
		for (int i=0;i<m;i++)
		{	int temp;
			temp   = x[i+m];
			x[i+m] = x[i];
			x[i]   = temp;
		} 
	
	else 
	{	int p=0, q, r, s=0, tot=0;
		r=x[p];
		while (tot<n) 
			if(!y[s]) 
			{
				y[p]=1;
				if (p<=m-1) p=p+n-m; else p=p-m;
				q=x[p];
				x[p]=r;
				r=q;
				tot++;
			}
			else s++;
		if (p<=m-1) p=p+n-m; else p=p-m;x[p]=r;
	}
	
	for (int i=0;i<n;i++) printf("%d ", x[i]);
}
*/ 
