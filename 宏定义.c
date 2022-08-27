#include<stdio.h>
#define pi 3.14
#define prt  printf("%f\n",pi);\
             printf("%s","多行也可以")

//预先定义的宏(单纯文本替换) __FILE__ __TIME__  __LINE__ __FUNC__ __TIME__

int main(){
	prt;
	
	
	return 0;
}
