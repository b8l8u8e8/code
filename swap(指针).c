#include<stdio.h>

int main(){
	int a=1,b=2;
	printf("a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
	
}

void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;	
}