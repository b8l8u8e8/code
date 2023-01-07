#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int dsxj(char *a,int an,char *b,int bn,int *c){
	int a2[300]={0,},b2[300]={0,},fushu=1;
//	判断ab字符串谁大，程序只能固定a-b，如果b大就和a换位置，小的话不动
	if(strcmp(a,b)<0){
//		换了位置减出来的结果和原结果是反的，记录负数
		fushu=-1;
//		a,b交换位置给a2，b2并且逆序为整数
		for(int i=0;i<an;i++){
			b2[an-i-1]=a[i]-'0';
		}
		for(int i=0;i<bn;i++){
			a2[bn-i-1]=b[i]-'0';
		}
//		同时交换两方长度
		int temp=an;
		an=bn;
		bn=temp;
	}else{
//		a本来就大于b不用换，直接逆序为整数a2b2
		for(int i=0;i<an;i++){
			a2[an-i-1]=a[i]-'0';
		}
		for(int i=0;i<bn;i++){
			b2[bn-i-1]=b[i]-'0';
		}
	}
//	最大长度的数组拿出来，只能是an，上面bn大就交换位置，bn小就不交换
	int lenc=an;
	
	
	for(int i=0;i<lenc;i++){
//		对位相减
		c[i]+=a2[i]-b2[i];
//		借位操作
		if(c[i]<0){
			c[i+1]--;
			c[i]+=10;
		}
	}
//	消除减后的0，比如666-666全为0了，考虑长度发生的变化，这里和加法不一样，加法最多进位1或不进位，减法必须while一个个判断但保证长度＞0
	while(c[lenc-1]==0&&lenc>=2){
		lenc--;
	}
	return lenc*fushu;
	
}
void nxsc(int *c,int lenc){
	if(lenc<0){
//		结果算出来是负数就打印-
		printf("-");
		for(int i=-1*lenc-1;i>=0;i--){
			printf("%d",c[i]);
		}
	}else{
	for(int i=lenc-1;i>=0;i--){
	printf("%d",c[i]);
	}
	}
}
int main(){
	char a[300]="60",b[300]="90";
	int c[350]={0,};
	
	nxsc(c,dsxj(a,strlen(a),b,strlen(b),c));
}
