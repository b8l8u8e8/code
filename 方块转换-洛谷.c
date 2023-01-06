#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int l1(char a[11][11],char b[11][11],int n){
	int is=1;
	for(int i=1;i<=n;i++){
		for(int i2=1;i2<=n;i2++){
			if(a[i][i2]!=b[i2][n+1-i]){
				is=0;
				break;
			}
			
		}
		if(is==0){
			break;
		}
	}
	
	return is;
}
int l2(char a[11][11],char b[11][11],int n){
	int is=1;
	for(int i=1;i<=n;i++){
		for(int i2=1;i2<=n;i2++){
			if(a[i][i2]!=b[n+1-i][n+1-i2]){
				is=0;
				break;
			}
			
		}
		if(is==0){
			break;
		}
	}
	
	return is;
}
int l3(char a[11][11],char b[11][11],int n){
	int is=1;
	for(int i=1;i<=n;i++){
		for(int i2=1;i2<=n;i2++){
			if(a[i][i2]!=b[n+1-i2][i]){
				is=0;
				break;
			}
			
		}
		if(is==0){
			break;
		}
	}
	
	return is;
}
int l4(char a[11][11],char b[11][11],int n){
	int is=1;
	for(int i=1;i<=n;i++){
		for(int i2=1;i2<=n;i2++){
			if(a[i][i2]!=b[i][n+1-i2]){
				is=0;
				break;
			}
			
		}
		if(is==0){
			break;
		}
	}
	
	return is;
}
int l5(char a[11][11],char b[11][11],int n){
	char c[11][11];
	for(int i=1;i<=n;i++){
		for(int i2=1;i2<=n;i2++){
		c[i][i2]=a[i][n+1-i2];		
		}
	}
	if(l1(c,b,n)==1||l2(c,b,n)==1||	l3(c,b,n)==1){
		return 1;
	}else return 0;

}
int l6(char a[11][11],char b[11][11],int n){
	int is=1;
	for(int i=1;i<=n;i++){
		for(int i2=1;i2<=n;i2++){
			if(a[i][i2]!=b[i][i2]){
				is=0;
				break;
			}
			
		}
		if(is==0){
			break;
		}
	}
	
	return is;
}
int ll(char a[11][11],char b[11][11],int n){
	if(l1(a,b,n)==1){
		return 1;
	}else if(l2(a,b,n)==1){
		return 2;
	}else if(l3(a,b,n)==1){
		return 3;
	} else if(l4(a,b,n)==1){
		return 4;
	} else if(l5(a,b,n)==1){
		return 5;
	} else if(l6(a,b,n)==1){
		return 6;
	} else {
		return 7;
	}  
		
}
int main(){
int n;
scanf("%d",&n);

char a[11][11],b[11][11];
for(int i=1;i<=n;i++){
	for(int i2=1;i2<=n;i2++){
		scanf(" %c",&a[i][i2]);
		
	}
}
for(int i=1;i<=n;i++){
	for(int i2=1;i2<=n;i2++){
		scanf(" %c",&b[i][i2]);
	}
}
printf("%d",ll(a,b,n));

}
//https://www.luogu.com.cn/problem/P1205
