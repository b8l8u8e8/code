#include<stdio.h>

int main(){
	int a=1;
	int *p=&a;
	int **p2=&p;
	int ***p3=&p2;
	printf("%d",***p3);
	return 0;
	
}
