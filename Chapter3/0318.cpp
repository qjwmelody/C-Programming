#include<stdio.h>
#include<math.h>
void main()
{
	long f0,f1,f2,fi,i;
	double c;
	f0=0;
	f1=1;
	c=(1.0+ sqrt(5.0))/2.0;
	fi=(int)(c/sqrt(5.0)+0.5);
	i=2;
	for(i=1;f1==fi;i++)
	{
		f2=f1+f0;
		f0=f1;
		f1=f2;
		c=c*(1.0+sqrt(5.0))/2.0;
		fi=(int)(c/sqrt(5.0)+0.5);
	}
	printf("%d",i);
}

		
	