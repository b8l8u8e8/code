#include<stdio.h>


int main(){
	
	int n,i,i2,i3,c[7]={0};
	scanf("%d",&n);
	int a[n+1][7];
	int b[n];
	for(i=0;i<n;i++){
		b[i]=0;
	}
	for(i=0;i<n+1;i++){
		for(i2=0;i2<7;i2++){
		scanf("%d",&a[i][i2]);	
		}
		
	}
	for(i=1;i<n+1;i++){
		for(i3=0;i3<7;i3++){
			for(i2=0;i2<7;i2++){
				if(a[i][i3]==a[0][i2]){
					b[i-1]++;
					break;
				}
			}
		}
			
	}
	for(i=0;i<n;i++){
		 if(b[i]!=0){
			c[7-b[i]]++;
		}
	}
	for(i=0;i<7;i++){
		if(i==6){
		printf("%d",c[i]);	
		}else printf("%d ",c[i]);
		
	}
	return 0;
}




/*https://www.luogu.com.cn/problem/P2550
 
 */
