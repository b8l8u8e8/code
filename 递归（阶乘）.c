#include <stdio.h>
#include<string.h>
int bbb(int n,int cnt,long b);

int main()
{
	int a;
	printf("Input n:");
	scanf("%d",&a);
	if(a<0){
		printf("n<0, data error!\n");
	}else{
		bbb(a,a,a);
	}
	
	
}
int bbb(int n,int cnt,long b){
	
	if(cnt==1){
		printf("%d! = %ld\n",n,b);
		return 0;
	}
	cnt-=1;
	bbb(n,cnt,b*cnt);	
	
	
	
}
