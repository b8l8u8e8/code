#include<stdio.h>
int sum(int begin,int end);


int main(){
	int begin,end;
	scanf("%d %d",&begin,&end);
	printf("%d",sum(begin,end));
	return 0;
	
}
int sum(int begin,int end){
	int i,x=0;
	for(i=begin;i<=end;i++){
		x+=i;	
	}
		return x;
}


