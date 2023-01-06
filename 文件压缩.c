#include<stdio.h>

void zfpx(char a[],int len);


int main (void)
{

		int len,p,i,i2;
	scanf("%d",&len);
	char s[len],s_1[len];
	scanf("%s",&s);
	scanf("%d",&p);
	//数组赋值
 for(i=0;i<len;i++){
 	s_1[i]=s[i];
 	//printf("%s",s);
 }
 //数组排序
 zfpx(s_1,len);
 //把p首位的那行移到最后以便for
 if(p!=len){
 	 char t;
 	 t=s[p-1];  s[p-1]=s[len-1]; s[len-1]=t;
 	 t=s_1[p-1];  s_1[p-1]=s_1[len-1]; s_1[len-1]=t;
 	 p=len;
 }
//s[p]  s_1[p]
printf("%c",s[p-1]);
int n,k=p;
for(i2=1;i2<=len;i2++){
	    for(i=0,n=len-i2;i<n;i++){
	if(s_1[len-i2]==s[i]){
		k=i;
		printf("%c",s[i]);
		char t;
		t=s[k];  s[k]=s[len-i2-1]; s[len-i2-1]=t;
 	    t=s_1[k];  s_1[k]=s_1[len-i2-1]; s_1[len-i2-1]=t;
		//s[p]  s[i] s_1[p]
		break;
	}
    }
	
}



	return 0;
	
}
//字符串排序
void zfpx(char a[],int len)
{
	int i=0,i2;
	for(i2=len-1;i2>0;i2--){
		int k=0;
			 for(i=1;i<i2+1;i++){
	     	if(a[k]<a[i]){
			k=i;
			//printf("%d",i);
	    	}
	    }
	    char t;
	    t=a[k];
	    a[k]=a[i2];
	    a[i2]=t;
	//swap(a[k],a[i2]);
		//printf("%c %c",a[k],a[i2]);
   }
    
}

//题目：https://vjudge.csgrandeur.cn/contest/511569#problem/D
