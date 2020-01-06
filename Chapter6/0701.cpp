#include<stdio.h>
#include<string.h>
struct contacts
{
	char name[20];
	char sex;
	int age;
	int phonenum[20];
};
void input()
{
	contacts con1,con2,con3;
	printf("请输入3个联系人的年龄\n");
	scanf("%d%d%d",&con1.age,&con2.age,&con3.age);
}
void output()
{
	contacts con1,con2,con3;
	printf("%d%d%d",con1.age,con2.age,con3.age);
}
void main()
{
	input;
	output;
}