#include<stdio.h>
#include<math.h>
#define MAXN 1000 
#define MIN 1e-11
double x[MAXN];    //仅考虑数组为有理数的情形 

int main()
{
	int n,j=0,tot=1,m=1;
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%lf", &x[i]);
	while(j<n-1)
	{
		if (fabs(x[j]-x[j+1])<MIN) tot++;
			else tot=1;
		j++;
		if (tot>m) m=tot; 
	} 
	printf("%d", m);
}
