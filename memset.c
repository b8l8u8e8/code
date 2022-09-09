#include<stdio.h>
#include<string.h>

int main(){
	int a[10]={3,2,3,4,5,},i;
	memset(a,-1,8);//memset只能把int赋值为0或-1 其他不行，字符串可以
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
		printf("\n\n");
	char b[10]="abcdefg";
	memset(b,'c',8);//memset只能把int赋值为0或-1 其他不行，字符串可以
	printf("%s",b);

	
	return 0;
}
