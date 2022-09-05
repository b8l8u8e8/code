#include<stdio.h>
int max(int x,int y);
int min(int x,int y);


int main(){
	int (*p[2])(int ,int)={max,min};
	int ret;
	ret=(*p[0])(10 ,20);
	printf("%d",ret);
	return 0;
	
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
