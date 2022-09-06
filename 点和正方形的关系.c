#include<stdio.h>

int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	if(x>1 || y>1 || x<-1 || y<-1){
		printf("no");
	}else  printf("yes");
	return 0;
}


/*
  https://vjudge.csgrandeur.cn/contest/513832#problem/D
 */
