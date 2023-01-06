#include<stdio.h>
#include<string.h>

int main(){
	char a[255];
	int b=0;
	gets(a);
//	scanf("%s",a);
	//printf("%d",strlen(a));
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='0'&&a[i]<='9'){
		b++;
		}
	}
	printf("%d",b);
	return 0;
	
}
/*
  https://vjudge.csgrandeur.cn/contest/512622#problem/A
 */
