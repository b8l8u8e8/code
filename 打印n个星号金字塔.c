#include <stdio.h>
#include<math.h>
#include<string.h>

int main()
{
int a,i,i2;
printf("Input n:\n");
scanf("%d",&a);
 for(i=1;i<=a;i++){
	 for(i2=a-i;i2>0;i2--){
		 printf(" ");
	 }
	 for(i2=0;i2<2*i-1;i2++){
		 
			 printf("*");
		 
		 
	 }
	 if(i!=a){
		printf("\n");
	 }
 }

	
    
	


	
		
}
/*
  编程实现以下图形打印。要求要打印的图形行数（n）从键盘读入。
 ***输入提示信息**："Input n:\n"
 ***输入数据格式**："%d"
 ***输出数据格式**："*"， " "（空格）
  若n=3，则要打印的图形为：（注：第一行空2个空格，第二行空1个空格，第三行没有空格，*后没有空格）
 *
 ***
 *****
  若n=5，则要打印的图形为：
 *
 ***
 *****
 *******
 *********
 */
