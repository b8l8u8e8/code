#include <stdio.h>
#include<string.h>


int main()
{
	int n,m,cnt=0;
	scanf("%d %d",&n,&m);
	int a[n];
	memset(a,0,sizeof(a));
	
		
		for(int i2=0,i=0;cnt<n-1;i2++,i++){
			if(i==n){
				i=0;
			}
			if(i2==m){
				i2=0;
			}
			if(a[i]==-1){
				i2--;	
			}
			if(i2==m-1){
				a[i]=-1;
				cnt++;
			}
			
		}
	
	for(int i=0;i<n;i++){
		if(a[i]==0){
			printf("%d\n",i+1);
			break;
		}
	}
	

}

/*
  n个人围成一圈，顺序编号。从第一个人开始从1到m报数，凡报到m的人退出圈子，编程求解最后留下的人的初始编号。
 */
