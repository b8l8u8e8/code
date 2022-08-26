#include<stdio.h>
#include<math.h>
int retnum(int a);

int main(){
	int begin,end,a[10]={0,};
	scanf("%d %d",&begin,&end);

// 129 137
		for(;begin<=end;begin++){
		 	int chu,sz2=begin;
	chu=pow(10,retnum(begin)-1);
	while(chu>0){
		a[sz2/chu]+=1;
        sz2%=chu;
        chu/=10;
	}
			
		}
		
	printf("%d %d %d %d %d %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
	
	
//	printf("%d",retnum(123));
	return 0;
}
/*
123/100=1
123%100=23
23/10=2
23%10=3

*/
int retnum(int a){
	int i;
	for(i=0;a>0;i++){
		a/=10;
	}
	return i;
}


/*
ÌâÄ¿https://www.luogu.com.cn/problem/P1554
*/