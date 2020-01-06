#include<stdio.h>
int *search(int a[],int x){
    int *p=a;
    while(*p&&*p!=x) p++;
    return *p?p:NULL;
}
