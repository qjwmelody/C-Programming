#include<stdio.h>
#include<string.h>
int main()
{
	char pro[100];
	int a[100],i,m,n;
	printf("����Դ��������\n");
	gets(pro);
	for(i=0,m=n=0;i<strlen(pro);i++)
	{
		if(pro[i]=='(') m++;
		else if(pro[i]==')') m--;
		else if(pro[i]=='{') n++;
		else if(pro[i]=='}') n--;
	}
	if(m!=0&&n==0)
		printf("Բ���Ų�ƥ��\n");
	else if(n!=0&&m==0)
		printf("�����Ų�ƥ��\n");
	else if(m!=0&&n!=0)
		printf("Բ���źͻ����Ŷ���ƥ��\n");
	else if(m==0&&n==0)
		printf("����ƥ��\n");
	return 0;
} 