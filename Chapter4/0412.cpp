//����� 
#include<stdio.h>
#define MAXN 1000
int x[MAXN];  //������������Ԫ��Ϊ���͡�double������ڸ�ʽ���⡣ 
int n,m,j=0;

void exchange(int a) //�ӵ�a������ʼ��ǰm�������m�����Ľ��� 
{
	for (int i=0;i<m;i++)
		{	int temp;
			temp = x[a+i+m];
			x[a+i+m] = x[a+i];
			x[a+i] = temp;
		}
}
void zerodelete(int a)	//��ȥ���һ�ν������ܲ������� 
{
	for (int i=0;i<m;i++) x[a+i]=x[a+i+j*m+m-n];
}

int main()
{	
	scanf("%d%d", &n, &m);
	for (int i=0;i<n;i++) scanf("%d", &x[i]); //���� 
	
	while (m<n-j*m) {exchange(j*m);j++;};
	zerodelete(n-m);
	
	for (int i=0;i<n;i++) printf("%d ", x[i]); //��� 
}
/*��Ŀ�������ǲ�������������ʱ�洢ԭ������Ԫ�ء�
���ж�������һ�������ڱ�ǵ���������Υ��Ҫ�󣬲�����Ϊ��λ���顣
�����������£� 
#include<stdio.h>
#define MAXN 1000
int x[MAXN];  //������������Ԫ��Ϊ���͡�double����������⡣ 
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
