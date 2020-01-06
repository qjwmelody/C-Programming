#include<stdio.h>
#include<math.h>
void main()
{
	int k;
	double e,t;
	k=1;
	e=1.0;
	t=1.0;
	while(fabs(t)>=1.0e-6)
	{
		e+=t;
		t=t/(k+1);
		k++;
	}
	printf("%4d e=%lf\n",k-1,e);
}

	 
