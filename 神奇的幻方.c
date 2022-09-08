#include<stdio.h>

int main(){
	int n,k;
	scanf("%d",&n);
	int a[n][n],x[n*n],y[n*n];//x行y列
	int i,i2;
	//初始化a
	for(i=0;i<n;i++){
		for(i2=0;i2<n;i2++){
			a[i][i2]=0;	
		}
	}
	//初始化a
    a[0][n/2]=1;
	x[1]=0;y[1]=n/2;
	for(k=2;k<n*n+1;k++){
		
		if(x[k-1]==0 && y[k-1]!=n-1){
			a[n-1][y[k-1]+1]=k;
			x[k]=n-1;y[k]=y[k-1]+1;
		}
	   if(y[k-1]==n-1 && x[k-1]!=0){
		    a[x[k-1]-1][0]=k;
			x[k]=x[k-1]-1;y[k]=0;
	    }
	   if(x[k-1]==0 && y[k-1]==n-1){
		   a[x[k-1]+1][y[k-1]]=k;
		   x[k]=x[k-1]+1;y[k]=y[k-1];
	   }
	   if(x[k-1]!=0 && y[k-1]!=n-1){
		   if(a[x[k-1]-1][y[k-1]+1]==0){
			   a[x[k-1]-1][y[k-1]+1]=k;
			   x[k]=x[k-1]-1;y[k]=y[k-1]+1;
		   }else{
			   a[x[k-1]+1][y[k-1]]=k;
			   x[k]=x[k-1]+1;y[k]=y[k-1];
		   }
	   }
   }
	
	for(i=0;i<n;i++){
		for(i2=0;i2<n;i2++){
			if(i2==n-1){
				printf("%d",a[i][i2]);
			}else{printf("%d ",a[i][i2]);}
		}
		if(i!=n-1){
			printf("\n");
		}
	}
	return 0;
}


/*
  https://www.luogu.com.cn/problem/P2615
 */
