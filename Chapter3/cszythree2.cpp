#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	for(ch='A';ch<='Z';ch++)
		printf("%c\t5o\t%x\t%d\n",ch,ch,ch,ch);
	for(ch='a';ch<='z';ch++)
		printf("%c\t%o\t%x\t%d\n",ch,ch,ch,ch);
	system("pause");
}