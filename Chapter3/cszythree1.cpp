#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k;
	b=c=d=e=f=g=h=i=j=k=0;
	printf("输入一个整数\n");
	while((a=getchar())!='\n')
		{switch(a)
			{case'0':b++;break;
			 case'1':c++;break;
			 case'2':d++;break;
			 case'3':e++;break;
			 case'4':f++;break;
			 case'5':g++;break;
			 case'6':h++;break;
			 case'7':i++;break;
			 case'8':j++;break;
			 case'9':k++;break;
	        }
	    }
	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",b,c,d,e,f,g,h,i,j,k);
	system("pause");
}
