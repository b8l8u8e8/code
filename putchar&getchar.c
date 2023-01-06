#include<stdio.h>

int main(void){
	int ch;
	while((ch=getchar())!=EOF){
		putchar(ch);
	
	}
	printf("EOF\n");
	return 0;
}
/*
上面的getchar一次只能读一个字符，无限循环读出写出了所有字符
window ctrl+z  unix ctrl+d   ->getchar()=EOF
*/