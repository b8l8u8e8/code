#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int dsxj(char *a,int alen,char *b,int blen,int *c){
	int a2[300]={0,},b2[300]={0,};
//	逆序将两个字符串变成整型，方便对位相加
	for(int i=0;i<alen;i++){
		a2[alen-1-i]=a[i]-'0';
	}
	for(int i=0;i<blen;i++){
		b2[blen-1-i]=b[i]-'0';
	}
	int clen;
//	取最大的数组的长度做相加的限制
	alen>blen?(clen=alen):(clen=blen);
	for(int i=0;i<clen;i++){
//		对位相加
		c[i]+=a2[i]+b2[i];
//		相加进位
		if(c[i]>=10){
			c[i+1]+=c[i]/10;
			c[i]=c[i]%10;
		}
	}
//	加后是否进位,即新长度,用于再次逆序输出
	if(c[clen]>0){
		clen++;
	}
	return clen;
	
	
}
void nxsc(int *c,int clen){
//	逆序输出逆序过的数组(已经相加过的)
	for(int i=clen-1;i>=0;i--){
		printf("%d",c[i]);
	}
}
int main(){
	char a[300]="8010",b[300]="203";
	int c[350]={0};
	int clen=dsxj(a,strlen(a),b,strlen(b),c);
	nxsc(c,clen);
}

