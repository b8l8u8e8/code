#include<stdio.h>
#include<string.h>


int main(){
	int n,m,i,i2,i3=-1;
	
    scanf("%d%d",&n,&m);
    int a[n];
	memset(a,0,n*4);
	//n=50 m=31
    for(i=0;i<n-1;i++){
		for(i2=0;i2<m;i2++){
			i3++;
			if(i3==n){
				i3=i3-n	;
			}
			if(a[i3]==-1){
				i2--;
				continue;
				
			}
		
			if(i2==m-1){
			a[i3]=-1;
			}
			
		}
	}
	for(i=0;i<n;i++){
		//printf("%d#%d\n",i,a[i]);
		if(a[i]==0){
			printf("%d\n",i+1);
		}
	}	
	return 0;
}
/*  *  *  i3  i2
  4  2   2
  1246        3   2
    *
   *
  Q3169.(10分)n个人围成一圈，顺序编号。从第一个人开始从1到m报数，凡报到m的人退出圈子，编程求解最后留下的人的初始编号。
  程序运行示例：
  6 3（两个输入数据之间有空格）
  1
  
  输入格式：scanf("%d%d",&n,&m);
  输出格式：printf("%d\n",loop[dest]);
 */

