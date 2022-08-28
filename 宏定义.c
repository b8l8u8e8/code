#include<stdio.h>
#define pi 3.14
#define prt  printf("%f\n",pi);\
             printf("%s","多行也可以\n")
//带参数宏没有类型
#define compute(x) x*5
//预先定义的宏(单纯文本替换) __FILE__ __TIME__  __LINE__ __FUNC__ __TIME__

int main(){
	prt;
	printf("%d",compute(3));
	
	return 0;
}
