#include<stdio.h>
int is(int x);
int main(){
	int ss,i=2,i2=0;
	scanf("%d",&ss);
	while(i2!=ss){
		if(is(i)) i2++;
		i++;
	}
	printf("%d",i-1);
	return 0;
}


int is(int x){
	int i,pd=1,ret;
	for(i=2;i<x;i++){
		if(x%i==0) {
			pd=0;
		break;
		}
	}
	if(pd==1){
		ret=1;
	}else ret= 0;
	return ret;
}

/*
  题目https://vjudge.csgrandeur.cn/contest/513832#problem/E
 */
