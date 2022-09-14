#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main(){
	int l,r;
	scanf("%d %d",&l,&r);
	int ss,chu=1,i=0;
    for(;l<=r;l++){
	ss=l;
	chu=1;
	for(;ss>=10;){
		ss/=10;
		chu*=10;
	}
	ss=l;
	while(chu>0){
		if(ss/chu==2){
			i++;
		}
		ss%=chu;
		chu/=10;
	    }
	}
	printf("%d",i);

	return 0;
}
/*
  https://www.luogu.com.cn/problem/P1179
 */
