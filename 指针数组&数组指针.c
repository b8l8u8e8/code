#include<stdio.h>
void main2(void);
void main3(void);

int main(){
	//main2();
	main3();
	return 0;
}
void main2(void){
	//定义3个指针的数组----指针数组
	char *p[3]={"hello","hello2","hello3"};
	printf("%s",p[1]);
	printf("%c",p[1][5]);
}
void main3(void){
	//定义一个指针指向3个元素的数组----数组指针
	int a[2][3]={{1,2,3},{4,5,6}};
	int (*p)[3]=a;
	printf("%d\n",p[0][1]);
	printf("%d\n",(p+1)[0][1]);
}
