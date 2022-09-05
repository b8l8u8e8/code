#include<stdio.h>
int max(int x,int y);
int min(int x,int y);

int main(){
	int (*p)(int,int),ret;
	p=min;
	ret=(*p)(10,20);
	printf("%d",ret);
}
int max(int x,int y){
	int ret;
	if(x>y) ret=x;
	else  ret =y;
	return ret;
	
}

int min(int x,int y){
	int ret;
	if(x<y) ret=x;
	else  ret =y;
	return ret;
	
}
