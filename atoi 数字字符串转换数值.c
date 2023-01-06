#include<stdio.h>
#include<stdlib.h>
void bbb();


int main(){
	void(*p)();
	p=bbb;
	(*p)();
	
	

	return  0;
}

void bbb(){
	int a;
	char b[5]="689";
	a=atoi(b);
	printf("%d",a);
	
}
