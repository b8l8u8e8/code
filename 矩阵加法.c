#include<stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n][m],b[n][m],c[n][m];
	int i,i2;
	for(i=0;i<n;i++){
		for(i2=0;i2<m;i2++){
			scanf("%d",&a[i][i2]);
		}
	}
	for(i=0;i<n;i++){
		for(i2=0;i2<m;i2++){
			scanf("%d",&b[i][i2]);
		}
	}
	for(i=0;i<n;i++){
		for(i2=0;i2<m;i2++){
		c[i][i2]=b[i][i2]+a[i][i2];
		if(i2==m-1){
			printf("%d",c[i][i2]);
		}else {
			printf("%d ",c[i][i2]);
		}
		
		}
		if(i!=n-1){
			printf("\n");
		}
		
	}
}
