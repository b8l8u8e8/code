#include<stdio.h>
int wdg(int n,int a);
int wdg2(int n);
int main(){
	printf("%d",wdg(12,1));
	//printf("%d",wdg2(12));
}
//尾递归
int wdg(int n,int a){
	if(n==1){
		return a;
	}else{
		return wdg(n-1,n*a);
	}
	
}
int wdg2(int n){
	if(n==1){
		return 1;
	}else{
		return wdg2(n-1)*n;
	}
	
}
