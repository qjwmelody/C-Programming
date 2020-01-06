#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,j,k,n;
	printf("ÊäÈëÒ»¸ö×Ö·û´®\n");
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{	
		if(s[i]!=' ') break;
	}
	for(j=i,k=0;j<n;j++)	
	{
		if(s[j]==' '&&s[j+1]==' ') j=j;
			else s[k]=s[j];k++;
	}
	s[k+1]='\0';
	printf("%s\n",s);
	return 0;
}