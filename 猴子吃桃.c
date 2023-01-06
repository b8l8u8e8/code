#include<stdio.h>

int main(){
	int n,i,ret=1;
	scanf("%d",&n);
	
	for(i=0;i<n-1;i++){
		ret=(ret+1)*2;
	}
	printf("%d",ret);
	return 0;
	
}
/*https://www.luogu.com.cn/problem/P5743*/
