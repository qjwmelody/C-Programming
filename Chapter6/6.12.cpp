#include<stdio.h>
char *deleterepeat(char *s){
    char *p,*q,*r;
    for(p=q=s;*p;p++){
        for(r=s;r<q;r++)
            if(*r==*p) break;
        if(r==q) *q++=*p;
    }
    *q='\0';
    return s;
}


