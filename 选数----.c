#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void zhs(int n,int k,int *a,int*c);
int fact(int x);
int main(){
	int a[6]={1,2,3,4,5,6},n=6,k=3;
	int b[fact(n)/fact(k)][k];
	zhs(n,k,a,&b[0][0]);	
	int i,i2;
	for(i=0;i<n-k+1;i++){
		for(i2=0;i2<k;i2++){
		printf("%d ",b[i][i2])	;
			
		}
		printf("\n");
	}
		
	return 0;
}
//12345
void zhs(int n,int k,int *a,int *c){
	int i,i2;
	int k2=k;
	int (*b)[k]=(int (*)[])c;
	for(i=0;i<fact(n)/fact(k);i++){
		if(i<n-k+1){
			for(i2=0;i2<k2;i2++){
				if(i2==k-1){
					b[i][i2]=a[k+i-1];
				}else{
				b[i][i2]=a[i2];	
				}
			
			}
		}
	}

	
	
}

	int fact(int x){
		int i,ret=1;
		for(i=1;i<=x;i++){
			ret*=i;
		}
		return ret;
	}

/*
  https://www.luogu.com.cn/problem/P1036
 */
