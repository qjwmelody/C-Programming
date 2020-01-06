#include<stdio.h> 
void read(int *p[],int n){ 
	int i; 
	for(i=0;i<n;i++) 
		scanf("%d",p[i]); 
} 

void sort(int *p[],int n){ 
	int i,j,k; 
	for(i=0;i<n;i++) 
		for(j=0;j<n-i-1;j++) 
			if(*p[j]>*p[j+1]){ 
				k=*p[j]; 
				*p[j]=*p[j+1]; 
				*p[j+1]=k; 
			} 
} 

void write(int *p[],int n){ 
	int i; 
	for(i=0;i<n;i++) 
		printf("%d ",*p[i]); 
} 

int main(){ 
	int i,j,k,l,s,t,n,m; 
	int a[1000]; 
	int *p[1000]; 
	scanf("%d",&n); 
	for(i=0;i<n;i++) 
		p[i]=&a[i]; 
		read(p,n); 
		sort(p,n); 
		write(p,n); 
	return 0; 
}