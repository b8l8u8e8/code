#include<stdio.h>
#include<string.h>

int main(){
	int i,is=0;
	char a[100000];
	int b[255]={0,};
	scanf("%s",a);
	for( i=0;i<(int)strlen(a);i++){
		b[(int)a[i]]++;
	}
    for( i=0;i<(int)strlen(a);i++){
		if(b[(int)a[i]]==1){
			printf("%c",a[i]);
			is=1;
			break;
		}
	}
	if(is==0){
		printf("no");
	}
	return 0;

}


/*
  给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出"no"。
  
  输入格式
  一个字符串，长度小于 100000100000。
  
  输出格式
  输出第一个仅出现一次的字符，若没有则输出"no"。
  
 */
