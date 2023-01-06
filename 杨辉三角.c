#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		a[i][0]=1;
		a[i][i]=1;
	
	}
	for(int i=2;i<n;i++){
		for(int i2=1;i2<i;i2++){
			a[i][i2]=a[i-1][i2-1]+a[i-1][i2];
		}
	}
	for(int i=0;i<n;i++){
		for(int i2=0;i2<i+1;i2++){
			printf("%-4d",a[i][i2]);
		}
		printf("\n");
	}
	
}
