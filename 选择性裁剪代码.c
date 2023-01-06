#include<stdio.h>
#define aaa 1
//1保留 0裁剪
int main(){
#if aaa
printf("123\n");	
#endif
	printf("456");
	return 0;
	
}
